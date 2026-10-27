#include <stdio.h>
#include <stdbool.h>

 
bool isPrime (int x); /*returns true if x is prime */
 
int main (){
     
    for (int i = 100, c = 1; c <= 50; i++){

        if (isPrime(i)) {
            printf("#%d | %d is prime.\n", c, i);
            c++;
        }
    }
     
    return 0; 
}
 
bool isPrime (int x){
     
    if (x == 1 || x == 2) return true; 
    if (x % 2 == 0) return false; 
     
    int y = x - 1; 
     
    while (y > 1){
         
        if (x % y == 0) return false;
        y--;
    }
     
    return true;
     
}
