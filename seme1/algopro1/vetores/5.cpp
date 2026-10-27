#include <iostream>
using namespace std;

int main (){
	int a[20], b[20], c[20];

	for(int i = 0; i < 20; i++){
		cout << "Insira A[" << i << "]: ";
		cin >> a[i];
	};

	for(int i = 0; i < 20; i++){
		cout << "Insira B[" << i << "]: ";
		cin >> b[i];
	};

	for(int i = 0; i < 20; i++){
		c[i] = a[i] - b[i];
		cout << "Valor C[" << i << "]: " << c[i] << endl;
	};

	return 0;
}
