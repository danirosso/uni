#include <stdio.h>
#include <math.h>

void quadraticEquation(float a, float b, float c, double *answ);
int getgcd(int m, int n);
 
int main (int argc, char *argv[]){

    if (argc != 4){
        printf("Wrong number of arguments\n"); 
        return 1;
    }

    float inA, inB, inC;
    sscanf(argv[1], "%f", &inA);
    sscanf(argv[2], "%f", &inB);
    sscanf(argv[3], "%f", &inC);

    double answ[2]; 

    quadraticEquation(inA, inB, inC, answ); 

    printf("x' = %.2f\nx\" = %.2f\n", answ[1], answ[2]);
}
 
int getgcd(int m, int n){

    int hold; 

    while (n != 0){
        hold = m % n;
        m = n;
        n = hold;
    }

    return m; 
}
     

void quadraticEquation(float a, float b, float c, double *answ){

    float delta = (b * b) - (4 * a * c);
     
    if (delta < 0){
        answ[1] = 0;
        answ[2] = 0;
         return; 
    }
     
    b *= -1; 

    if ((sqrt(delta) - (int)sqrt(delta)) == 0){
         
        int gcdplus  = getgcd(b + sqrt(delta), a*2); 
        int gcdminus = getgcd(b - sqrt(delta), a*2); 
         
        printf("x'=   %3.f  | x\"= %3.f\n"
               "      ---  |     ---\n"
               "      %3.f  |     %3.f\n\n", 
                (b + sqrt(delta))/gcdplus, (a*2)/gcdplus, (b - sqrt(delta))/gcdminus, (a*2)/gcdminus);
    }else {
        printf("%.f +- sqrt(%.f) / %.f\n", b, delta, (2*a));
    }
      
    answ[1] = ((b) + sqrt(delta))/(2*a);
    answ[2] = ((b) - sqrt(delta))/(2*a);

}
