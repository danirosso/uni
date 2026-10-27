#include <iostream>
using namespace std;

bool isPositive (int val); /* returns true if val >= 0 */ 

int main (){

    int inputVal;

    do { 
         
        printf("Type a value (0 to quit): ");
        scanf("%d", &inputVal);
         
        if (inputVal == 0) break; 

        if (isPositive(inputVal)){
            printf("The value is postive.\n");
        }else {
            printf("The value is negative.\n");
        }
         
    }while (inputVal != 0); 
     
    return 0; 
}

bool isPositive (int val){
    return val >= 0 ? true : false;
}
