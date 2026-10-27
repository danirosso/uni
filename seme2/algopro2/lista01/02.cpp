#include <iostream>
using namespace std;

bool isPerfect (int val); /* returns true if val is a perfect number -
                             a perfect number is a number that's
                             equal to the sum of it's dividers
                             besides itself */

int main (){

    int inputVal; 

    do { 

        printf("Type a value (0 to quit): ");
        scanf("%d", &inputVal);
        if (inputVal == 0) break; 

        if (isPerfect(inputVal)){
            printf("This is a perfect number\n");
        }else {
            printf("This is not a perfect number\n");
        } 

    } while (inputVal != 0); 


    return 0;
}

bool isPerfect (int val){

    if (val == 1) return true; 
    if (val % 2 != 0) return false; /* there are no perfect odd numbers
                                       in the int range */
    int divisor = val/2;
    int divisorSum = 0; 

    for (divisor; divisor > 0; divisor--){
        if ( val % divisor == 0) divisorSum += divisor;
    } 
     
    return (val - divisorSum == 0) ? true : false; 

} 
