#include <stdio.h>
#include <stdbool.h> 
 
bool isPerfect (int val);
void returnPerfectArray (int *array, size_t size);

int main (){

    int inArray[5];
     
    returnPerfectArray(inArray, 5); 

    for (int i = 0; i < 5; i++){
        printf("Array[%d] = %d\n", i, inArray[i]);
    }

    return 0; 
}



void returnPerfectArray (int *array, size_t size){

    int n = 1; 

    for (int i = 0; i < size; i++){ 
        while(!isPerfect(n)) n++;
        array[i] = n;
        n++;
    }
}


bool isPerfect (int val){

    if (val == 1) return true; 
    if (val % 2 != 0) return false; /* there are no perfect odd numbers
                                       in the int range */
    int divisor = val/2;
    int divisorSum = 0; 

    for (divisor; divisor > 0; --divisor){
        if ( val % divisor == 0) divisorSum += divisor;
    } 

    return (val - divisorSum == 0) ? true : false; 

} 
