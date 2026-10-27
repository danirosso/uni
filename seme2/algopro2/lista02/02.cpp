#include <iostream>
using namespace std;
 
#include "lista02.h"

float harmonic (float *scores, size_t size);
float arithmetic (float *scores, size_t size);
float weighted (float *score, size_t size, int *weight);
float average (float *scores, char meanMethod);

int main (){

    char options[] = {'a','h','w'}, chosen; 

    do{
        printf("Do you want to [a]rithmetic, [h]armonic or [w]eighted averages? ");
        chosen = menu(options, sizeof(options)/sizeof(char));
    }while (chosen == '\0');

    float scores[3]; 

    for (int i = 0; i < 3; i++){
        printf("Insert the [%d] score: ", i);
        scanf("%f", &scores[i]);
    }

    printf("The average is: %.2f", average(scores, chosen));

}

float harmonic(float *scores, size_t size){

    float sum = 0;

    for (int i = 0; i < size; i++){
        sum += (1/scores[i]); 
    }

    return size/sum; 
}

float arithmetic (float *scores, size_t size){

    float sum = 0;

    for (int i = 0; i < size; i++){
        sum += scores[i];
    }

    return sum/size; 

}

float weighted (float *score, size_t size, int *weight){

    float sum = 0;
    int weightSum = 0;

        for (int i = 0; i < size; i++){
            sum += score[i] * weight[i];
            weightSum += weight[i];
        } 

    return (float) sum/weightSum; 
}


float average (float *scores, char meanMethod){

    int weights[3] = {5, 3, 2}; 

    switch (meanMethod){
        case 'a': return arithmetic(scores, 3); break;
        case 'h': return harmonic(scores, 3); break;
        case 'w': return weighted(scores, 3, weights); break;
    }

} 
