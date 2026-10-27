#include <iostream>
using namespace std;

int main (){
	int vetor[10], menor, maior;
	float media = 0;

	for (int i = 0; i < 10; i ++){
		cout << "Insira o valor para a posicao [" << i <<"] :"<< endl;
		cin >> vetor[i];
		if (i == 0) {
			maior = vetor[i];
			menor = vetor[i];
		};
		if (vetor[i] > maior){
			maior = vetor[i];
		};
		if (vetor[i] < menor){
			menor = vetor[i];
		};
		media += vetor[i];
	};

	cout << "Maior valor: " << maior << endl << "Menor valor: " << menor << endl << "Media: " << media / 10 << endl;
	return 0;
}
