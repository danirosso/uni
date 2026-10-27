#include <iostream>
using namespace std;
#define SIZE 5

int main () {
	int val[SIZE], reverse[SIZE];
	
	for (int i = 0; i < SIZE; i++){
	cout << "Insira o valor [" << i << "]: ";
	cin >> val[i];
	}

	for (int i = 0; i < SIZE; i++){
		reverse[i] = val[i] * -1;
		cout << "Valor invertido [" << i << "]: " << reverse[i] << endl;
	}

	return 0;
}
