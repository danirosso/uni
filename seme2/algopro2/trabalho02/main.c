 /* T2M2 - Algoritimos e programacao
  * 26/10/26
  * Autor: Daniel Rosso Strutz 
  * Professor: Marcos Carrard */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

typedef struct{
    double coef;
    char ch;
    int exp;
}Mono;

typedef struct _Poli{
    Mono mono;
    struct _Poli *next;
}Poli;

Poli *getPoli(void);
char *allocatedString(void);
char **tokenize(char *str, size_t *tokenum);
void printPoli(Poli *poli);
Poli *polinize(char **tokens, size_t ntokens);
char menu(char *options, size_t num);
Poli *numVal(Poli *polia);
size_t getVars(Poli *poli, char *vars);
double score (Poli *poli, char ch, double val);
Poli *sumPoli(Poli *polia, Poli *polib);
Poli *scalar(Poli *polia);
Poli *subPoli(Poli *polia, Poli *polib);
Poli *organizePoli(Poli *polia);

int main(void)
{
    printf("Monomials without a sign will be assumed to be positive\n"
            "Monomials without a exponent will be assumed to be ^1\n"
            "Monomials without a variable will be assumed be a constant\n"
            "Any number before a variable will be assumed to be a coeficient\n"
            "Any number after an variable will be assumed to be a exponent\n"
            "Input a space separeted list of monomials to form a polynomial.\n"
            "Example: 7*x^4 +5x3 +2x^4 -3x^3 +x^2 -x +1\n");


    Poli *polia = malloc(sizeof(Poli));
    Poli *polib = malloc(sizeof(Poli));

    char mainopts[2] = {'y', 'n'};
    char choice;
    do{
        polia = getPoli();
        printPoli(polia);
        printf("Is this polynomial right? [y]es | [n]o ");
        choice = menu(mainopts, 2);
    }while(choice != 'y');

    char loopopts[] = {'o','c','q', '1', '2', '3', '4', '5'};

    do{
        printf("Current Register :"); printPoli(polia);
        printf("\nChoose an option:\n"
                "1 - Numerical value.\n"
                "2 - Sum.\n"
                "3 - Subtraction.\n"
                "4 - Scalar Multiplication\n"
                "5 - Product Multiplication\n"
                "o - Organize the polynomial\n"
                "c - Clear the screen and print the register\n"
                "q - Quit\n"
              );

        choice = menu(loopopts, sizeof(loopopts));

        switch(choice){
            case '1':polia = numVal(polia);
                     break;
            case '2':printf("Insert the second polynomial: ");
                     polib = getPoli();
                     polia = sumPoli(polia, polib);
                     while(getchar() != '\n');
                     break;
            case '3':printf("Insert the second polynomial: ");
                     polib = getPoli();
                     polia = subPoli(polia, polib);
                     while(getchar() != '\n');
                     break;
            case '4':polia = scalar(polia);
                     while(getchar() != '\n');
                     break;
            case '5':printf("TBD\n");
                     break;
            case 'q':printf("Bye bye!");
                     break;
            case 'o':organizePoli(polia);
                     break;
            case 'c':printf("\033c");
                     break;
            default:
                     choice = menu(loopopts, 6);
        }
    }while(choice != 'q');

    return 0;
}

Poli *scalar(Poli *polia)
{
    double factor = 1.0f;
    printf("By which number you want to multiply? ");
    scanf("%lf", &factor);

    for(Poli *head = polia; head != NULL; head = head->next){
        head->mono.coef *= factor;
    }

    return polia;
}

Poli *sumPoli(Poli *polia, Poli *polib)
{
    Poli *head = polia;
    while (polia->next != NULL) polia = polia->next;
    polia->next = polib;
    printPoli(head);

        return organizePoli(head);
}

Poli *subPoli(Poli *polia, Poli *polib)
{

    for(Poli *head = polib; head != NULL; head = head->next){
        head->mono.coef *= -1.0f;
    }

    Poli *head = polia;
    while (polia->next != NULL) polia = polia->next;
    polia->next = polib;
    printPoli(head);

        return organizePoli(head);
}

Poli *organizePoli(Poli *polia)
{
    Poli *head = polia;

    while(head){
        Poli *back = head;
        Poli *front = head->next;

        while(front){
            if(head->mono.ch == front->mono.ch &&
                    head->mono.exp == front->mono.exp){
                head->mono.coef += front->mono.coef;
                back->next = front->next;
                front = back->next;
            }else {
                back = front;
                front = front->next;
            }
        }
        head = head->next;
    }

    head = polia;

    while(head){
        Poli *back = head;
        Poli *front = head->next;

        while(front){
            if(front->mono.coef == 0.0f){
                back->next = front->next;
                front = back->next;
            }else {
                back = front;
                front = front->next;
            }
        }

        head = head->next;
    }

    return polia;
}

Poli *numVal(Poli *polia)
{
    char *vars = malloc(sizeof(char));
    size_t varn = getVars(polia, vars);
    double val = 0;
    double res = 0;

    for(int i = 0; i < varn; i++){
        if(*(vars + i) == '$'){
            val = 1.0f;
            res += score(polia, *(vars + i), val);
        } else{
            printf("%c: ", *(vars + i));
            scanf("%lf", &val);
            res += score(polia, *(vars + i), val);
        }
    }
    printf("%.2lf\n", res);
    printf("Do you want to change the register? [y]es | [n]o ");
    while((getchar()) != '\n');
    char opts[2] = {'y', 'n'};
    char choice = menu(opts, 2);
    if (choice == 'y'){
        free(polia);
        Poli *polir = malloc(sizeof(Poli));
        polir->mono.ch = '$';
        polir->mono.exp = 1;
        polir->mono.coef = res;
        polir->next = NULL;
        return polir;
    } else{
        return polia;
    }

}

double score (Poli *poli, char ch, double val){
    double res = 0;
    while(poli){
        if (poli->mono.ch == ch){
            res += poli->mono.coef * pow(val, poli->mono.exp);
            poli = poli->next;
        } else{
            poli = poli->next;
        }
    }

    return res;
}


size_t getVars(Poli *poli, char *vars)
{
    *vars = poli->mono.ch;
    poli = poli->next;
    size_t n = 1;

    while(poli){
        bool diff = true;

        for(int i = 0; i < n; i++){
            if(*(vars + i) == poli->mono.ch){
                diff = false;
            }
        }
        if (diff){
            vars = realloc(vars, sizeof(char) * n + 1);
            *(vars + n) = poli->mono.ch;
            n++;
        }
        if (!diff)
            poli = poli->next;
    }


    return n;
}

char menu(char *options, size_t num)
{

    char choice;
    choice = getchar();
    while(getchar() != '\n');

    for(int i = 0; i < num; i++)
        if (choice == *(options+i)) return choice;

    printf("Wrong option, choose again ");
    choice = menu(options, num);

    return '0';
}


Poli *getPoli(void)
{
    char *str = allocatedString();

    if (!str){
        free(str);
        exit(-1);
    }

    size_t ntokens = 0;
    char **tokens = tokenize(str, &ntokens);

    if (!tokens){
        free(tokens);
        exit(-1);
    }

    Poli *res = polinize(tokens, ntokens);
    free(str);
    free(tokens);

    return res;

}

void printPoli(Poli *poli)
{
    while(poli){
        printf("+(");
        if(poli->mono.coef != 1.0f && poli->mono.ch != '$') printf("%.2lf*", poli->mono.coef);
        if(poli->mono.ch == '$') printf("%.2lf", poli->mono.coef);
        if(poli->mono.ch != '$') printf("%c", poli->mono.ch);
        if(poli->mono.exp != 1) printf("^%d", poli->mono.exp);
        printf(")");
        poli = poli->next;
    } 
}

Poli *polinize(char **tokens, size_t ntokens)
{
    Poli *head = malloc(sizeof(Poli));
    Poli *hold = head;

    for(int i = 0; i < ntokens; i++){
        head->next = malloc(sizeof(Poli));
        head = head->next;
        *tokens = *(tokens + i);

        head->mono.coef = 1.0f;
        head->mono.exp = 1;
        int chindex = -1;
        bool caret = false;
        bool star = false;

        for(char c = 0, *p = *tokens; *p != '\0'; p++){
            if (*p >= 'a' && *p <= 'z') {
                head->mono.ch = *p;
                *p = '\0';
                chindex = c;
            } else {
                c++;
            }

            if (*p == '^'){
                *p = '\0';
                caret = true;
            }

            if (*p == '*'){
                *p = '\0';
                star = true;
            }

        }
        if(star) chindex--;

        //printf("chindex: %d\n", chindex);

        if (chindex == -1){
            head->mono.ch = '$';
            sscanf(*tokens, "%lf", &head->mono.coef);
        }

        if (chindex == 1){
            if(*(*tokens) == '-'){
                head->mono.coef = -1.0f;
            }else if (*(*tokens) == '+'){
                head->mono.coef = 1.0f;
            }else {
                sscanf(*tokens, "%lf", &head->mono.coef);
            }

            if(caret) chindex++;
            sscanf(*tokens + chindex + 1, "%d", &head->mono.exp);
        }

        if (chindex >= 2){
            if(caret) chindex++;
            sscanf(*tokens + chindex + 1, "%d", &head->mono.exp);
            sscanf(*tokens, "%lf", &head->mono.coef);
        }
    }

    head = hold->next;
    free(hold);

    return head;
}

char *allocatedString(void)
{
    char ch, *str = malloc(sizeof(char));
    size_t chindex = 0;

    while ((ch = getchar()) != '\n'){
        *(str + chindex) = ch;
        chindex++;
        str = realloc(str, sizeof(char)*chindex + 1);
        if (str == NULL){
            free(str);
            return NULL;
        }
    }

    *(str + chindex) = '\0';
    return str;
}

char **tokenize(char *str, size_t *tokenum)
{
    char **tokens = malloc(sizeof(char*));

    while (*str == ' '){
        str += 1;
    }

    *tokens = str;
    size_t tokindex = 1;

    for (char *p = str; *p != '\0'; p++){
        if (*p == ' '){
            *p = '\0';
            if(*(p + 1) != ' ' && *(p + 1) != '\0'){
                *(tokens + tokindex) = (p + 1);
                tokindex++;
                tokens = realloc(tokens, sizeof(char*) * tokindex + 1);
            }

            if (!tokens){
                free(tokens);
                return NULL;
            }
        }
    }

    *tokenum = tokindex;
    return tokens;
}
