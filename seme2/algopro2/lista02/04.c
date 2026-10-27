#include <stdio.h>

void getHoursMins (int *s, int *m, int *h);
     
int main (){

    int s, m, h;  
    printf("Insert the amount of seconds: "); 
    scanf("%d", &s);

    getHoursMins(&s, &m, &h); 
     
    printf("%d:%d:%d\n", h, m, s); 

    return 0; 
}

void getHoursMins (int *s, int *m, int *h){

    *h = *s/(60*60);
    *m = (*s % (60*60)) /60;
    *s = (*s % (60*60)) %60;

}
