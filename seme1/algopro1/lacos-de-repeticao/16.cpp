#include <iostream>
using namespace std;

int main (void){
	long unsigned int n;
	cout << "Insira um numero para fatorar: ";
	cin >> n;
	for (int i = n - 1; i > 0; i--){
		n *= i;
	};
	cout << "Resultado: " << n << endl;
	return 0;
}
