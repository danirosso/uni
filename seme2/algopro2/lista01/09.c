#include <stdio.h>
#include <stdbool.h> 

int factorial (int x); /* Returns x! */
float eq (int x, int n); /* Returns the equation on exercise 09 - lista01 */

int main (){

    int x, n; 

    printf( "     x + 2     x + 3     x + 4         x + n + 1  \n"
            "A = ------- - ------- + -------  (+/-) -----------\n"
            "       1!        2!        3!               n!    \n");
    do{ 
        printf("Insert n: "); 
        scanf("%d", &n);
        if (n < 0) printf("n must be bigger than 0, please re-");
    }while (n < 0);        

    printf("Insert x: ");
    scanf("%d", &x);

    printf("A = %.04f\n", eq(x,n)); 

    return 0; 
}    

int factorial (int n){
    int answ = 1; 
     
    for (int i = 1; i <= n; i++) answ*=i; 
     
    return answ;
}

float eq (int x, int n){

    int count = 1; 
    float a = 0.0f;
    bool plusTime = true; 

    while (count <=  n){
        float f = factorial(count);
        float r = (x + ++count) / f; 
         
        if (plusTime) a += r; else a -= r;
        plusTime = !plusTime; 
    }
     
    return a; 
} 
