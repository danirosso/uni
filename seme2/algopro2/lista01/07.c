#include <stdio.h>
 
float e(int x); /* returns x/1 + x/2 ••• x/x */
void prettyPrint_e(int x);

int main (){
     
    printf("    X     X     X     X \n"
           "e= --- + --- + --- + ---\n"
           "    1     2     3     X \n");

    printf ("e = %0.4f\n", e(5));
    printf ("e = %0.4f\n", e(15));
     
    float answ = 0.0f;
     
    //prettyPrint_e(5); 
     
    for (int i = 5; i <= 15; i++) printf("e(%d)++  = %0.4f\n", i, answ += e(i));
     
}

float e(int x){
     
    float answ = 0.0f; 
     
    for (int i = 1; i <= x; i ++) answ += (float) x/i;
     
    return answ; 
} 
 
void prettyPrint_e(int x){
     
    printf("   "); 
     
    for (int i = 1; i <= x; i++)
    printf(" %d ", x);
    
    printf("\ne =");

    for(int i = 1; i <= x; i++){
    printf(" -");
    if (i % 2 == 0) printf(" + ");
    }
     
    printf("\n   ");

    for (int i = 1; i <= x; i++)
        printf(" %d ", i);
     
    printf("\n");
}
