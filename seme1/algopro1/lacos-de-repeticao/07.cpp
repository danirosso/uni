#include <iostream>
using namespace std;

int main (void){
	int i=0, n, soma;
	cout << "Insira um numero: ";
	cin >> n;
	do{
		if (n % 2 == 0 && n != 0){
			soma += n;
			i ++;
		};
		cout << "Insira mais um numero, ou insira 0 para encerrar: ";
		cin >> n;
	}while(n != 0);
	if ( i >= 1){
		cout << "O programa encerrou, a media dos numeros pares e: " << soma / i;
	}else{
		cout << "O programa encerrou, nenhum numero par foi inserido.";
	}
	return 0;
}
