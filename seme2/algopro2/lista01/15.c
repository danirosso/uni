#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void fill2dArray(int randMod, size_t line, size_t col, int array[line][col]);
void print2dArray(size_t line, size_t col, int array[line][col]);
void multiplyByMainDiagonal(size_t line, size_t col, int array[line][col]);
 
#define SIZE 6 
 
int main (){
     
    int in2dArray[SIZE][SIZE]; 
    
    srand(time(NULL)); 
    fill2dArray(10, SIZE, SIZE, in2dArray);
     
    print2dArray(SIZE, SIZE, in2dArray); 
     
    multiplyByMainDiagonal(SIZE, SIZE, in2dArray);
     
    putchar('\n'); print2dArray(SIZE, SIZE, in2dArray); 
     
}
 
void multiplyByMainDiagonal(size_t line, size_t col, int array[line][col]){
     
    for (int i = 0; i < line; i++){
        for (int j = 0; j < col; j++){
            array[i][j] *= array[i][i];
        }
    }
}
 
void fill2dArray(int randMod, size_t line, size_t col, int array[line][col]){
     
    for (int i = 0; i < line; i++){
        for (int j = 0; j < col; j++){ 
            array[i][j] = rand() % randMod;
            printf(" [%d][%d]: %d ", i, j, array[i][j]);
        }
        putchar('\n');
    }
}

void print2dArray(size_t line, size_t col, int array[line][col]){

    for (int i = 0; i < line; i++){
        for (int j = 0; j < col; j++){ 
            printf("%4d ", array[i][j]); 
        }
        putchar('\n'); 
    }
}
