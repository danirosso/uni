#include <iostream>
using namespace std;

int main (void){
	float valor;
	cout << "Insira o valor do produto: ";
	cin >> valor;
	valor = valor*1.15;
	cout << "O valor com a taxa e: R$" << valor;
	return 0;
}
