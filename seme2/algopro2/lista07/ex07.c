#include <stdio.h>
 
int main(void){


    int vimaginario = 0x55000;

    printf("%x\n", vimaginario + (int)(sizeof(int) * 3));
     
    return 0;
}
