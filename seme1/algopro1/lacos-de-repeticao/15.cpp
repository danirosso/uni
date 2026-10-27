#include <iostream>
using namespace std;

int main (void){
	int impar = 0, par = 0, x;
	for (int i = 0; i < 20; i++){
		cout << i << "# Insira um numero: ";
		cin >> x;
		if (x % 2 == 0){
			par ++;
		}else {
			impar ++;
		};
	};
	cout << "Pares: " << par << endl << "Impares: " << impar << endl;
	return 0;
}
