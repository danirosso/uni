#include <iostream>
#include "lista02.h"

using namespace std;
void bubbleSort (int *a, size_t size);

int main (){

    int inArray[50];
    fillArray(10, inArray, 50);
    printArray(inArray, 50); 

    bubbleSort(inArray, 50);
    printArray(inArray, 50); 

    return 0;
}

void bubbleSort (int *a, size_t size){

    bool flag = true; 

    for (int i = 0; i < size - 2; i++){
        if (a[i] > a[i+1]){
            int hold = a[i];
            a[i] = a[i+1];
            a[i+1] = hold;
            flag = true; 
        }  
    }     
}
