#include <iostream>
#include <tgmath.h> 
 
#include "lista02.hpp"
 
using namespace std;

 
int main (){
     
    double fArray[5];
    int iArray[5];
     
    fillAnyArray(9.4, fArray, 5); 
    fillAnyArray(10, iArray, 5); 
     
    printAnyArray(fArray, 5);
    printAnyArray(iArray, 5);
     
    return 0; 
}
