#include <iostream>
using namespace std;

int main (){
	int vetor[5], cont = 0, contm = 0, conti = 0;

	for (int i = 0; i < 5; i ++){
		cout << "Insira o valor para posicao [" << i << "]: ";
		cin >> vetor[i];
		if (i > 0 && vetor[i] > vetor[0]) cont ++;
		if (i > 0 && vetor[i] < vetor[0] contm ++;
		if (i > 0 && vetor[i] == vetor[0] conti ++;
	};

	cout << cont << " maiores que o primeiro valor" << endl;
	cout << contm << " menores que o primeiro valor" << endl; 
	cout << conti << " iguais ao 'primeiro valor" << endl; 
	return 0;
}
