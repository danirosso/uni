#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main (void){

	srand((time(NULL)));

	int matriz[4][4], max = 0, min = 0, max_line;

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			matriz[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << matriz[i][j] << "  ";
			if (matriz[i][j] > max){
				max = matriz[i][j];
				max_line = i;
			}
		}
		cout << endl << "-------------" <<endl;
	}
	min = matriz[max_line][0];

	for (int j = 0; j < 4; j++){
		if (matriz[max_line][j] < min){
			min = matriz[max_line][j];
		}
	}
	cout << "A linha que possui o maior valor e: " << max_line<< endl << "e menor valor dessa linha e: " << min << endl;
	
	return 0;
}
