#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "lista02.h" 

void getLargerSmaller(int *array, size_t size, int *larger, int *smaller);

int main (){

    int inArray[50];
    int larger_value, smaller_value;

    fillArray(10, inArray, 50);
    printArray(inArray, 50);

    getLargerSmaller(inArray, 50, &larger_value, &smaller_value); 

    printf("Larger Value: %d\n"
            "Smaller Value: %d\n", larger_value, smaller_value);

    return 0; 

}

void getLargerSmaller(int *array, size_t size, int *larger, int *smaller){

    *larger = array[0];
    *smaller = *larger;

    for (int i = 0; i < size; i++){
        if (array[i] > *larger){
            *smaller = *larger; 
            *larger = array[i];
        }
    }
}
