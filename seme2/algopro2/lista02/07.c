#include <stdio.h>
#include <stdbool.h> 

int getLarger (int *array, size_t size);
bool checkTriangle (int a, int b, int c);
void organizeTriangle (int *a, int *b, int *c, int *triangle);

int main (int argc, char *argv[]){

    if (argc != 4){
        printf("Wrong number of arguments!\n");
        return 1;
    }

    int a, b, c, triangle[3];

    for (int i = 1; i < argc; i++){

        sscanf(argv[i], "%d", &triangle[i-1]);

        if (triangle[i-1] < 0){
            printf("Negative Value!\n");
            return 1;
        } 
    }

    organizeTriangle (&a, &b, &c, triangle);

    printf("a: %d, b: %d, c: %d\n", a, b, c); 

    if (!checkTriangle(a, b, c)){
        printf("Invalid geometry!\n");
        return 1;
    }

    if (a == b){
        if (a == c) {
            printf("That's an equilateral triangle!\n");
        } else{ 
            printf("That's an isosceles triangle\n");
        }
        return 0;
    }

    printf("That's an scalene triangle!\n");
    return 0;
}

void organizeTriangle (int *a, int *b, int *c, int *triangle){

    *c = getLarger(triangle, 3);
    bool aSetd = false;
    bool bSetd = false;

    for (int i = 0; i < 3; i++){
        if (triangle[i] != *c){
            *a = triangle[i];
            aSetd = true;
        }
    }

    if (aSetd){
        for (int i = 0; i < 3; i++){
            if (triangle[i] != *a && triangle[i] != *c){
                *b = triangle[i];
                bSetd = true; 
            }
        }
    }
     
    if (!bSetd) *b = *c;
     
    if (!aSetd){
        *a = *c;
        *b = *c;
    }
}


int getLarger (int *array, size_t size){

    int larger = array[0];

    for(int i = 0; i < size; i++){
        if(array[i] > larger) larger = array[i];
    }

    return larger; 
}

bool checkTriangle (int a, int b, int c){

    return ((a + b) > c) ? true : false; 
}
