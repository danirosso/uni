#include <iostream>
using namespace std;

int main (){
	int vetor[10];

	for (int i = 0; i < 10; i++){
		cout << "Insira o valor da posicao [" << i << "]: ";
		cin >> vetor[i];
	};
	for (int i = 9; i >= 0; i--){
		cout << "[" << i << "]: " << vetor[i] << endl;
	};

	return 0;
}
