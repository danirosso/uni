#include <stdio.h>
#include <tgmath.h>

double getSphereVolume (double r);
 
int main (){

    double r; 
    printf("Insert the radius: ");
    scanf("%lf", &r);
    printf("The volume of a sphere with the radius of %.2lf is %.4lf\n",
            r, getSphereVolume(r));

    return 0; 

}

double getSphereVolume (double r){

    return (double) 3/4 * M_PI * pow(r,3); 

}
