#include <iostream>
using namespace std;

int main (void){
	float lado1, lado2, lado3;
	cout << "Insira o valor do primeiro lado: ";
	cin >> lado1;
	cout << "Insira o valor do segundo lado: ";
	cin >> lado2;
	cout << "Insira o valor do terceiro lado: ";
	cin >> lado3;
	if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3){	
		if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3){
			cout << "Triangulo Equilatero.";
		}else{
		cout << "Triangulo Isosceles.";
		};
	}else{
		cout << "Triango escaleno.";
	};
	return 0;
}
