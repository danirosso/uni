#include <iostream>
using namespace std;

int main (void){
	float valorPago, valorProduto;
	cout << "Insira o valor do produto: ";
	cin >> valorProduto;
	cout << "Insira o valor pago: ";
	cin >> valorPago;
	cout << "Troco: R$" << valorPago - valorProduto;
	return 0;
}
