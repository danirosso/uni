#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h> 
 
void fillArray(int randMod, int *array, size_t size);
void printArray(int *array, size_t size);
bool isPrime (int n);
void substitutePrimes(int *array, size_t size);
 

#define SIZE 25

int main (){
     
    int inArray[SIZE]; 
     
    srand(time(NULL)); 
    fillArray(10, inArray, SIZE);

    printArray(inArray, SIZE);

    substitutePrimes(inArray, SIZE);
     
    printArray(inArray, SIZE);
     
}
 
bool isPrime (int n){
     
    if (n == 1 || n == 2) return true; 
     
    for (int m = n - 1; m > 1; m--){
        if ((n % m) == 0) return false;
    }
     
    return true; 
     
}
 
void substitutePrimes(int *array, size_t size){
     
    for (int i = 0; i < size; i++){
        if (isPrime(array[i])) array[i] = 0;
    }
}
 
void fillArray(int randMod, int *array, size_t size){
     
    for (int i = 0; i < size; i++){
        array[i] = rand() % randMod;
        printf("Filled in [%d]: %d\n", i, array[i]);
    }
}
 
void printArray(int *array, size_t size){
     
    for (int i = 0; i < size; i++)
        printf("%2d ", array[i]); 
     
    putchar('\n'); 
}
