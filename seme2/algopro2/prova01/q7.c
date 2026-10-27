#include <stdio.h>

void teste(int array[5][5]);

int main (){
     
     
    int array[5][5];

    for(int i = 0; i < 5; i ++)
        for(int j = 0; j < 5; j++)
            array[i][j] = 1;
     
    teste(array); 

    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 5; j++) printf("%d\t", array[i][j]);
        putchar('\n');
    }
}

void teste(int array[5][5]){
    for(int i = 0; i < 5; i ++)
        for(int j = 0; j < 5; j++){
            /* i < j is wrong */
            if (j > i) array[i][j] = 0;
            array[i+1][j] = array[i][j] + array[i][j+1];
        }
}
