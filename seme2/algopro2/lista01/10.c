#include <stdio.h>
#include <stdbool.h> 

bool areFriends(int x, int y);  /* Returns true if the sum of the
                                   divisors of x and y are the same */

int main (){

    int inX, inY; 

    printf("Input a solitary, sad number: ");
    scanf("%d", &inX);
    printf("Input another miserable number: ");
    scanf("%d", &inY);

    if(areFriends(inX, inY)){
        printf("%d and %d can get along just fine!", inY, inX);
    }else { 
        printf("These numbers can't be friends! )))):");
    } 
     
    return 0; 
}

bool areFriends(int x, int y){

    int divSumX = 0, divSumY = 0; 
     
    for (int i = x - 1; i > 0; i--){
        if (x % i == 0) divSumX += i;
    }

    for (int i = y - 1; i > 0; i--){
        if (y % i == 0) divSumY += i;
    }

    return (divSumY == x && divSumX == y) ? true : false; 
}
