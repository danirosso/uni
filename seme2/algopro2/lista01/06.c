#include <stdio.h>

#define MAX(x,y) (((x) > (y)) ? (x) : (y)) 
#define MIN(x,y) (((x) < (y)) ? (x) : (y)) 

int getgcd(int m, int n); 
/* Computes the greatest common divisor between two numbers
 * using the Euclid's algorithm (C: Modern Apprroach ->
 *                              programming exercise 6.2 )*/


int main (){

    int inVal, inVal1; 

    printf("Insert the first value: ");
    scanf("%d", &inVal);
    printf("Insert the second value: ");
    scanf("%d", &inVal1);
    printf("The greatest common divisor of" 
            " %d and %d is: %d\n", inVal, inVal1, getgcd(inVal,inVal1));

    return 0;
}

int getgcd(int m, int n){

    int hold; 

    while (n != 0){
        hold = m % n;
        m = n;
        n = hold;
    }

    return m; 
}
