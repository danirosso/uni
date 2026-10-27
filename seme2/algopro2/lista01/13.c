#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 5 
 
int average (int *array, size_t size);
void printArray(int *array, size_t size);

int main (){

    srand(time(NULL)); 

    int inArray[SIZE], inArray2[SIZE];

    for (int i = 0; i < SIZE; i++){ 
        printf("Insert the #1[%d] value: ", i);
       // scanf("%d", &inArray[i]); 
        inArray[i] = rand() % 10; 
        printf("%d\n", inArray[i]);
    }

    for (int i = 0; i < SIZE; i++){ 
        printf("Insert the #2[%d] value: ", i);
       // scanf("%d", &inArray[i]);
        inArray2[i] = rand() % 10; 
        printf("%d\n", inArray2[i]);
    }
     
    printArray(inArray, SIZE);
    printArray(inArray2, SIZE);

    if (average(inArray, SIZE) == average(inArray2, SIZE)){
        printf("The average of the arrays is the same.\n"); 
    } else {
        printf("The averages are not the same");
    }
     
    return 0; 
     
}
 
void printArray(int *array, size_t size){
     
    for (int i = 0; i < size; i++)
        printf("%2d ", array[i]); 
     
    putchar('\n'); 
     
}
 
int average (int *array, size_t size){
    
    int sum = 0;
     
    for (int i = 0; i < size; i++) sum += array[i]; 
     
    return sum/size; 
} 

