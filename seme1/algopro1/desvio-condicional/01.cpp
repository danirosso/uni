#include <iostream>	
using namespace std;

int main (void){
	int n;
	cout << "Insira um numero inteiro: ";
	cin >> n;
	if (n < 0){
		n = n * -1;
	};
	cout << "Modulo do numero: " << n;
	return 0;
}
