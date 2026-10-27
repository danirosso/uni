#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 2

void fill2dArray(int randMod, size_t line, size_t col, int array[line][col]);
void print2dArray(size_t line, size_t col, int array[line][col]);
char menu(char *options, int numOptions);
void sum2dArray(size_t line, size_t col, int array[line][col], int array1[line][col], int answ[line][col]);
void multiply2dArray(size_t line, size_t col, int array[line][col], int array1[line][col], int answ[line][col]);
void subtract2dArray(size_t line, size_t col, int array[line][col], int array1[line][col], int answ[line][col]);

int main (){
     
    int in2dArray[SIZE][SIZE], in2dArray1[SIZE][SIZE], asw2dArray[SIZE][SIZE]; 
    char opMenu[3] = {'+', '-', '*'}, chosen;

    fill2dArray(10, SIZE, SIZE, in2dArray);
    fill2dArray(10, SIZE, SIZE, in2dArray1);

    print2dArray(SIZE, SIZE, in2dArray); putchar('\n');
    print2dArray(SIZE, SIZE, in2dArray1); putchar('\n');

    do{
        printf("[+], [-], [*],");
        chosen = menu(opMenu, 3);
    }while(chosen == '\0');

    switch (chosen){
        case '+': sum2dArray(SIZE, SIZE, in2dArray, in2dArray1, asw2dArray); break;
        case '-': subtract2dArray(SIZE, SIZE, in2dArray, in2dArray1, asw2dArray); break;
        case '*': multiply2dArray(SIZE, SIZE, in2dArray, in2dArray1, asw2dArray); break;
    } 

    putchar('\n'); print2dArray(SIZE, SIZE, asw2dArray);
}     

void sum2dArray(size_t line, size_t col, int array[line][col], int array1[line][col], int answ[line][col]){

    for (int i = 0; i < line; i++){
        for (int j = 0; j < col; j++){ 
            answ[i][j] = array[i][j] + array1[i][j]; 
        }
    }
}

void multiply2dArray(size_t line, size_t col, int array[line][col], int array1[line][col], int answ[line][col]){

    fill2dArray(1, SIZE, SIZE, answ); 

    for (int i = 0; i < line; i++){
        for (int j = 0; j < col; j++){  
            for (int k = 0; k < col; k++){ 
                answ[i][j] += array[i][k] * array1[k][j]; 
            }
        }
    }
}

void subtract2dArray(size_t line, size_t col, int array[line][col], int array1[line][col], int answ[line][col]){

    for (int i = 0; i < line; i++){
        for (int j = 0; j < col; j++){ 
            answ[i][j] = array[i][j] - array1[i][j]; 
        }
    }

}

void fill2dArray(int randMod, size_t line, size_t col, int array[line][col]){

    for (int i = 0; i < line; i++){
        for (int j = 0; j < col; j++){ 
            array[i][j] = rand() % randMod;
        }
    }
}

void print2dArray(size_t line, size_t col, int array[line][col]){

    for (int i = 0; i < line; i++){
        for (int j = 0; j < col; j++){ 
            printf("%4d ", array[i][j]); 
        }
        putchar('\n'); 
    }
}

char menu(char *options, int numOptions){

    printf(" [q]uit: "); 

    char choice; 
    choice = getchar();
    while (getchar() != '\n'); 

    if (choice == 'q' || choice == 'Q') exit(0); 

    for (int i = 0; i < numOptions; i++){
        if (options[i] == choice) return choice;
    }

    printf("Wrong Option, please choose again.n"); 

    return '\0';
}
