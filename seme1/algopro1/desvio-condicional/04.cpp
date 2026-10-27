#include <iostream>
using namespace std;

int main (void){
	int diaAni, mesAni, anoAni, diaHj, mesHj, anoHj, idade;
	cout << "Insira o dia de hoje: ";
	cin >> diaHj;
	cout << "Insira o mes de hoje: ";
	cin >> mesHj;
	cout << "Insira o ano de hoje: ";
	cin >> anoHj;
	cout << "Insira o dia de nascimento: ";
	cin >> diaAni;
	cout << "Insira o mes de nascimento: ";
	cin >> mesAni;
	cout << "Insira o ano de nascimento: ";
	cin >> anoAni;
	idade = anoHj - anoAni -1; 
	if (mesHj > mesAni || (mesHj == mesAni && diaHj >= diaAni)){
		idade = idade + 1;
	};
	cout << "Sua idade e: " << idade;
	return 0;
}
