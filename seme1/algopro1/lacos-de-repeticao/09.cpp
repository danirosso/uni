#include <iostream>
using namespace std;

int main (void){
	int x, y, op;
	while (true){
		cout << "Insira 0 no primeiro e no segundo numero para encerrar o programa.\n";
		cout << "Insira o primeiro numero: ";
		cin >> x;
		cout << " 1: soma \n 2: subtracao \n 3: multiplicacao \n 4: divisao \nInsira o numero do operador ";
		cin >> op;
		while (op > 4 && op < 1) {
			cout << "Operador invalido, insira novamente: ";
			cin >> op;
		};
		cout << "Insira o segundo numero: ";
		cin >> y;

		if (x == 0 && y == 0){
			break;
		};

		switch (op){
			case 1: cout << x << "+" << y << "=" << x + y << "\n";break;
			case 2: cout << x << "-" << y << "=" << x - y << "\n";break;
			case 3: cout << x << "*" << y << "=" << x * y << "\n";break;
			case 4: cout << x << "/" << y << "=" << x / y << "\n";break;
		};
	}
	cout << "Programa encerrado";
	return 0;
}
