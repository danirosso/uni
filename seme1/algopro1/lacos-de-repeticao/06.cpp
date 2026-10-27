#include <iostream>
using namespace std;

int main (void){
	int base, expoente, resultado = 1;
	cout << "Insira a base: ";
	cin >> base;
	cout << "Insira o expoente: ";
	cin >> expoente;
	cout << base << "^" << expoente << "="; 
	if (expoente == 0){
		resultado = 1;
	}else{
		while (expoente > 0){
			resultado = resultado * base;
			expoente --;
		};
	}
	cout << resultado << "\n";
	return 0;
}
