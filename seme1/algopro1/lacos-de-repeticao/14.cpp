#include <iostream>
using namespace std;

int main (void){
	int maior = 0, menor = 0, i=0, x;
	do{
		cout << i << "# Insira um peso em kg: ";
		cin >> x;
		if (x < menor || i == 0) {
			menor = x;
		};
		if (x > maior || i == 0){
			maior = x;
		};
		i++;
	}while(i < 25);
	cout << "O menor peso foi: " << menor << endl;
	cout << "O maior peso foi: " << maior << endl;
	return 0;
}
