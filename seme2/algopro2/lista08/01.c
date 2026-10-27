#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void fillArray(int *a, size_t size){
    for (int i = 0; i < size; i++){
        *(a + i) = rand() % 100;
    }
}
void printArray(int *a, size_t size){
    for (int i = 0; i < size; i++){
        cout << *(a +i);
        if (i > 0 && i % 5 == 0) cout << "\n";
    }
}
 
int main(void){
     
    srand(time(NULL));
    int arraySize1 = rand() % 10;
    int arraySize2 = rand() % 10;

    int *array1 = new int[arraySize1];
    int *array2 = new int[arraySize2];
    int *array3 = new int[arraySize1 + arraySize2];

    fillArray(&array1, arraySize1);
    fillArray(&array2, arraySize2);

    printArray(&array1, arraySize1);
    printArray(&array2, arraySize2);

   return 0; 
}
