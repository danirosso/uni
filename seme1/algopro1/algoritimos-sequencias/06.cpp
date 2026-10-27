#include <iostream>
using namespace std;

int main (void){
	int a, b;
	cout << "Insira o numero a: ";
	cin >> a;
	cout << "Insira o numero b: ";
	cin >> b;
	int i;
	i = a;
	a = b;
	b = i;
	cout << "Numero a: " << a << " Numero b: " << b;
	return 0;
}
