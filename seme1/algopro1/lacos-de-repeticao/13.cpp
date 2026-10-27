#include <iostream>
using namespace std;

int main (){
	int x,menor;
	cout << "Insira um numero: ";
	cin >> menor;

	for (int i = 0; i <= 19; i++) {
		cout << i << "#Insira mais um numero: ";
		cin >> x;
		if (x < menor) menor = x;
	};

	cout << "O menor numero de todos foi: " << menor;
	return 0;
}
