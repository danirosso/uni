#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumDiagArray(size_t line, size_t col, int array[line][col]);
void fill2dArray(int randMod, size_t line, size_t col, int array[line][col]);
void print2dArray(size_t line, size_t col, int array[line][col]);


int main (){

    srand(time(NULL));

    int inArray[6][6]; 
    fill2dArray(10, 6, 6, inArray); 
    print2dArray(6, 6, inArray); 

    printf("Sum of the main and secondary diagonals: %d\n", sumDiagArray(6, 6, inArray));

    return 0;
}

int sumDiagArray(size_t line, size_t col, int array[line][col]){ 

    int sum = 0; 

    for (int i = 0; i < line; i++){
        for (int j = 0; j < col; j++){ 
            if (i == j) sum += array[i][j]; 
            if ((i + j) == line - 1) sum += array[i][j]; 
        }
    }
     
    return sum;
}

void fill2dArray(int randMod, size_t line, size_t col, int array[line][col]){

    for (int i = 0; i < line; i++){
        for (int j = 0; j < col; j++){ 
            array[i][j] = rand() % randMod;
        }
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
