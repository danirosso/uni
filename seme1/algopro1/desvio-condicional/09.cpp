#include <iostream>
using namespace std;

int main (void){
	float nota1, nota2, nota3, media;
	cout << "Insira o valor da primeira nota :";
	cin >> nota1;
	cout << "Insira o valor da segunda nota :";
	cin >> nota2;
	cout << "Insira o valor da tercerias nota :";
	cin >> nota3;
	media = (nota1 + nota2 + nota3) / 3;
	if (media >= 6){
		cout << "Voce foi aprovado!";
	}else{
		cout << "Voce foi reprovado!";
	};
	return 0;
}
