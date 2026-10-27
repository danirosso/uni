#include <iostream>
using namespace std;

int main (void){
	float salario, conta1, conta2;
	cout << "Valor do salario: R$";
	cin >> salario;
	cout << "Valor da primeira divida: R$";
	cin >> conta1;
	cout << "Valor da segunda divida: R$";
	cin >> conta2;
	conta1 = conta1 * 1.02;
	conta2 = conta2 * 1.02;
	salario = salario - conta1 - conta2;
	cout << "O que resta do salario e: R$" << salario;
	return 0;
}
