#include <iostream>
using namespace std;

#define TAM 3
int main () {

	int matriz[TAM][TAM], line_sum[TAM] = {0};

	for (int i = 0; i < TAM; i++){
		for (int j = 0; j < TAM; j++){
			cout << "Insira o valor [" << i << "][" << j << "]: ";
			cin >> matriz[i][j];	
		}
	}

	for (int i = 0; i < TAM; i++){
		for (int j = 0; j < TAM; j++){
			cout << matriz[i][j] << "  ";
			if (j == TAM - 1) cout << endl << "-------------" <<endl;
		}
	}

	for (int i = 0; i < TAM; i++){
		for (int j = 0; j < TAM; j++){
			line_sum[i] += matriz[i][j];
		}
	}

	cout << endl << "Apos multiplicar cada elemento pela soma da sua linha:  " << endl;

	for (int i = 0; i < TAM; i++){
		for (int j = 0; j < TAM; j++){
			cout << matriz[i][j] * line_sum[i] << "  ";
			if (j == TAM - 1) cout << endl << "-------------" <<endl;
		}
	}


	return 0;
}
