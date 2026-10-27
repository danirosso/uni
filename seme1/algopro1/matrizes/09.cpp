#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main (void){

	srand((time(NULL)));

	int matriz[5][5], sum = 0;

	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			matriz[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << matriz[i][j] << "  ";
			sum += matriz[i][j];
		}
	cout << endl << "-------------" <<endl;
	}

	cout << "A soma de todos os valores e: " << sum << endl;
	return 0;
}	
