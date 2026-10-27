#include <iostream>
using namespace std;
 
int modwithoutmod (int x, int y);
/*calculates the modulus of x / y without '%'*/
 
void swaplaces (int &x, int &y); /* swaps x and y */ 

int main (){
     
    int a,b; 
     
    printf("Insert the a value: "); 
    scanf("%d", &a); 
    printf("Insert the b value: "); 
    scanf("%d", &b); 
     
    if (a < b) swaplaces(a,b);
    printf("%d %% %d = %d", a, b, modwithoutmod(a, b));

    return 0; 
}
 
void swaplaces (int &x, int &y){

    int swap;
    swap = x;
    x = y;
    y = swap;

}
 
int modwithoutmod (int x, int y){
     
    if (x < y) swaplaces(x,y);
     
    while (x > y) x -= y;
     
    return x; 
   }
