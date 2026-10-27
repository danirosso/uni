#include <iostream>
using namespace std;

#define TAM 3
int main () {

	int matriz[TAM][TAM], result;

	for (int i = 0; i < TAM; i++){
		for (int j = 0; j < TAM; j++){
			cout << "Insira o valor [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];	
		}
	}

	for (int i = 0; i < TAM; i++){
		for (int j = 0; j < TAM; j++){
			if (j == i){
				result += matriz[i][j];
			}
		}
	}

	for (int i = 0; i < TAM; i++){
		for (int j = 0; j < TAM; j++){
			cout << matriz[i][j] << "  ";
			if (j == TAM - 1) cout << endl << "-------------" <<endl;
		}
	}

	cout << "O resultado da soma da diagonal principal e: " << result << endl;

	return 0;
}
