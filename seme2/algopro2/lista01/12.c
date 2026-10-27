#include <stdio.h>
 
float eq(int n); 
/* returns (1 + 1^2)/1 + (2 + 2^2)/2  ••• (n + n^2)/n */

int main (){
     
   int in_n;
   printf("Insert n:");
   scanf("%d", &in_n); 
    
   printf("%.04f", eq(in_n));
     
}
 
float eq(int n){
     
    float s = 0.0f;

    for (int i = 1; i <= n; i++)
        s += (float) (1 + (i * i)) / i;
     
    return s; 
}
