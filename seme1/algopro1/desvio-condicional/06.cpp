#include <iostream>
using namespace std;

int main (void){
	int n1, n2;
	cout << "Insira o primeiro numero: ";
	cin >> n1;
	cout << "Insira o segundo numero: ";
	cin >> n2;
	if (n1 == n2){
		cout << "Os dois numeros sao iguais.";
	}else if (n1 > n2){
		cout << "O primeiro numero, " << n1 << ", e maior.";
	}else{
		cout << "O segundo numero, " << n2 << ", e maior.";
	};
	return 0;
}
