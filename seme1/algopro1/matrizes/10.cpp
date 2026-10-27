#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main (void){

	srand((time(NULL)));

	int matriz_a[3][5], matriz_b[3][5], matriz_c[3][5];

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 5; j++){
			matriz_a[i][j] = rand() % 10;
			matriz_b[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 5; j++){
			cout << matriz_a[i][j] << "  ";
			}
		cout << endl << "-------------" <<endl;
		}
	cout << endl << endl;

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 5; j++){
			cout << matriz_b[i][j] << "  ";
			}
		cout << endl << "-------------" <<endl;
		}
	cout << endl << endl;

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 5; j++){
			matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
			cout << matriz_c[i][j] << "  ";
			}
		cout << endl << "-------------" <<endl;
		}
	cout << endl << endl;

	cout << "Elementos da linha [2]: " << endl;
	for (int j = 0; j < 5; j++){
		cout << matriz_c[2][j] << "   ";
	}

	cout << endl << "Elementos da colona [3]: " << endl;
	for(int i = 0; i < 3; i++){
		cout << matriz_c[i][3] << endl << "---" << endl;
	}

	return 0;
}
