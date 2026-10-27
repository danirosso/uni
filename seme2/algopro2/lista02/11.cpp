#include<iostream> 
using namespace std;
#include "lista02.h" 
 
#define SIZE 30
 
void separateEvenFromOdd(int *mainArray, size_t size, int *odd, int *even, int &evenIndex, int &oddIndex);
 
int main (){
     
    int inArray[SIZE], oddArray[SIZE], evenArray[SIZE];
    int oddIndex, evenIndex; 
     
    fillArray(10, inArray, SIZE);
    printArray(inArray, SIZE); 
    putchar('\n');
     
    separateEvenFromOdd(inArray, SIZE, oddArray, evenArray, evenIndex, oddIndex);
     
    printf("Odd Array: ");
    printArray(oddArray, oddIndex);
    putchar('\n');
    printf("Even Array: ");
    printArray(evenArray, evenIndex);
     
}
 
void separateEvenFromOdd(int *mainArray, size_t size, int *odd, int *even, int &evenIndex, int &oddIndex){
     
    oddIndex = 0, evenIndex = 0; 
     
    for (size_t i = 0; i < size; i++){
        if (mainArray[i] % 2 == 0){
            even[evenIndex] = mainArray[i];
            evenIndex++;
        } else{
            odd[oddIndex] = mainArray[i];
            oddIndex++;
        } 
    }
}
