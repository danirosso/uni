#include <iostream>
using namespace std;

#include "lista02.hpp"

int main (){
    int inArray[10], inArray1[10], outArray[20]; 
    fillAnyArray(10, inArray, 10);
    fillAnyArray(10, inArray1, 10);
     
    printAnyArray(inArray, 10); 
    putchar('\n');
    printAnyArray(inArray1, 10); 
    putchar('\n');
     
    uniteArray (inArray, inArray1, outArray, 10);
     
    printAnyArray(outArray, 20); 
    putchar('\n');
     
    return 0; 
}
