#include <iostream>
using namespace std;

int main (void){
	int n;
	cout << "Insira um numero: ";
	cin >> n;
	if (n > 0){
		cout << n << " e um numero positivo.";
	}else if (n < 0){
		cout << n << " e um numero negativo.";
	}else {
		cout << "o numero e 0.";
	};
	return 0;
}
