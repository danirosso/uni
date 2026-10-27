#include <iostream>
using namespace std;

#define TAM 5

int main (){

	int input_matriz[TAM][TAM], altered_matriz[TAM][TAM];

	for (int i = 0; i < TAM; i++){
		for (int j = 0; j < TAM; j++){
			cout << "Insira o valor [" << i << "][" << j << "]: ";
			cin >> input_matriz[i][j];	
		}
	}

	for (int i = 0; i < TAM; i++){
		for (int j = 0; j < TAM; j++){
			cout << "matriz [" << i << "][" << j << "]: " << input_matriz[i][j];
			if (input_matriz[i][j] > 100) {
				cout << "\tValor maior que 100!" << endl;
				altered_matriz[i][j] = 0;
			}else{
				altered_matriz[i][j] = input_matriz[i][j];
				cout << endl;
			}
		}
	}
	for (int i = 0; i < TAM; i++){
		for (int j = 0; j < TAM; j++){
			cout << "matriz alterada [" << i << "][" << j << "]: " << altered_matriz[i][j] << endl;
		}
	}

	return 0;
}
