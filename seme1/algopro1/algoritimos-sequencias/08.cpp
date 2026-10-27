#include <iostream>
using namespace std;

int main (void){
	float nota1, nota2, nota3;
	cout << "Insira a primeira nota: ";
	cin >> nota1;
	cout << "Insira a segunda nota: ";
	cin >> nota2;
	cout << "Insira a terceira nota: ";
	cin >> nota3;
	int mediaFinal;
	mediaFinal = ((nota1 * 2) + (nota2 * 4) + (nota3 * 6)) / (2 + 4 + 6);
	cout << "Media ponderada: " << mediaFinal;
	return 0;
}
