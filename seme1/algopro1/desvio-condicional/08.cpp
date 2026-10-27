#include <iostream>
using namespace std;

int main (void){
	int n1, n2, n3, maior;
	cout << "Insira o primeiro numero: ";
	cin >> n1;
	cout << "Insira o terceiro numero: ";
	cin >> n2;
	if (n1 > n2){
		maior = n1;
	}else {
		maior = n2;
	};

	cout << "Insira o terceiro numero: ";
	cin >> n3;
	if (n3 > maior){
		maior = n3;
	};

	cout << "O numero maior e: " << maior;
}
