#include <stdio.h>

int factorial (int n);
int comb (int n, int k);
 
int main (){
     
    int inK, inN; 
     
    printf("K: ");
    scanf("%d", &inK);
    printf("N: ");
    scanf("%d", &inN);
     
    printf("The number of k combinations contained in N is: %d", comb(inN, inK)); 
     
}
 
int factorial (int n){
    int answ = 1; 
     
    for (int i = 1; i <= n; i++) answ*=i; 
     
    return answ;
}
 
int comb (int n, int k){
     
    return factorial(n) / (factorial(k) * factorial(n - k)); 
     
}
