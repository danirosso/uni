#include <iostream>
using namespace std;

int main (void){
	int n;
	cout << "Insira um numero positivo: ";
	cin >>  n;
	while (n < 0) {
		cout << "Este numero nao e possitivo, insira um numero positivo!: ";
		cin >> n;
	};
	cout << "Programa encerrado, o numero e positivo";
	return 0;
}
