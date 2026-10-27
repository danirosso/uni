#include <tgmath.h>
#include <time.h>
#include <iostream>
using namespace std; 
 
template <typename T>
void uniteArray (T *ia, T *ia1, T *oa, size_t size){
     
    for (int i = 0; i < size; i++){
        oa[i] = ia[i];
    }
     
    for(int j = 0; j < size; j++){
        oa[size+j] = ia1[j];
    }
}

template <typename T>
T sumArray (T *array, size_t size){

    T sum = 0; 

    for (int i = 0; i < size; i++){
        sum += array[i]; 
    }

    return sum; 
}

template <typename T>
void fillAnyArray (T randMod, T *array, size_t size){

    srand(time(NULL));

    for (int i = 0; i < size; i++){
        array[i] = (T) fmod(rand(),randMod);
    }
}

template <typename T>
void printAnyArray (T *array, size_t size){

    for (int i = 0; i < size; i++){
        cout <<"[" << i << "]" << array[i] << endl;    
    }
}
