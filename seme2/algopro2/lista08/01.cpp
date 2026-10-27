#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
 
void fillArray(int *a, size_t size){
    for (int i = 0; i < size; i++){
        *(a + i) = rand() % 100;
    }
}
 
void printArray(int *a, size_t size){
    for (int i = 0; i < size; i++){
        cout << "[" << i << "] " << *(a +i) << " ";
    }
}

int *intercal(int *a, size_t sizea, int *b, size_t sizeb, int *resSize){

    *resSize = sizea + sizeb;
    int *res = new int[*resSize];
     
    for (int i = 0, j = 0; i < *resSize; i++){
        *(res+j) = *(a+i);
        *(res+j+1) = *(b+i);
        j += 2;
    }
    
        return res;
}
 
int main(void){
     
    srand(time(NULL));
    int arraySize1 = (rand() % 4) + 5;
    int arraySize2 = (rand() % 4) + 5;

    int *array1 = new int[arraySize1];
    int *array2 = new int[arraySize2];

    fillArray(array1, arraySize1);
    fillArray(array2, arraySize2);

    printArray(array1, arraySize1);
    putchar('\n');
    printArray(array2, arraySize2);
    putchar('\n');
     
    int resSize; 
    int *res = intercal(array1, arraySize1, array2, arraySize2, &resSize);
     
    cout << resSize;
    printArray(res, resSize); 
    putchar('\n');

   return 0; 
}
