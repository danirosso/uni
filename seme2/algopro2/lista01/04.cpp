#include <iostream>
using namespace std;

void swaplaces (int &x, int &y); /* swaps x and y */ 

int main (){

    int a, b;

    printf("Insert the a value: ");
    scanf("%d", &a);
    printf("Insert the b value: "); 
    scanf("%d", &b);

    printf("a = %d \n"
            "b = %d \n", a, b);

    swaplaces(a, b);

    printf("a = %d \n"
            "b = %d \n", a, b);

    return 0;
}

void swaplaces (int &x, int &y){

    int swap;
    swap = x;
    x = y;
    y = swap;

}
