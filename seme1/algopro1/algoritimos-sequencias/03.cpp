#include <iostream>
using namespace std;

int main (void){
	float valorKilo, qntKilo;
	cout << "Insira o valor do kilo do produto: ";
	cin >> valorKilo;
	cout << "Insira a quantidade de kilos: ";
	cin >> qntKilo;
	cout << "O valor da compra e: R$" << qntKilo * valorKilo;
	return 0;
}
