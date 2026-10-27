#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define SIZE 100
 
void mm(int array[], size_t size, int *max, int *min){
     
    for(int i = 0; i < size; i++){
        if (array[i] > *max) *max = array[i];
        if (array[i] < *min) *min = array[i];
    }
}
 
int main(void){
     
    int array[SIZE];
    int max, min;
    srand(time(NULL)); 

    for(int i = 0; i < SIZE; i++){
        array[i] = (rand()%100) + 1;
        printf("%d |", array[i]);
        if( i > 0 && i+1 % 10 == 0) putchar('\n');
    }

    mm(array, SIZE, &max, &min);

    printf("\n"
           "max: %d\n"
           "min: %d\n", max, min);

    return 0;
}
