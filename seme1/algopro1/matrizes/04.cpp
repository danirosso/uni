#include <iostream>
using namespace std;

#define TAM 5
int main () {

	int matriz[TAM][TAM];

	for (int i = 0; i < TAM; i++){
		for (int j = 0; j < TAM; j++){
			if (j > i){
				matriz[i][j] = 1;
			}else{
				matriz[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < TAM; i++){
		for (int j = 0; j < TAM; j++){
			cout << matriz[i][j] << "  ";
			if (j == TAM - 1) cout << endl << "-------------" <<endl;
		}
	}
	return 0;
}
