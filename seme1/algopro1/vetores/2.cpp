#include <iostream>
using namespace std;

int main (){
	int acima = 0;
	float aluno[10], media = 0;

	for(int i = 0; i < 10; i++){
	       cout << "Insira a nota do aluno[" << i << "]: ";
	       cin >> aluno [i];
	       media += aluno[i];
	};
	media /= 10;

	for (int i = 0; i < 10; i++){
       if (aluno[i] > media) acima ++;
	};

	cout << "A media dos alunos foi: " << media << endl << acima << " alunos tiraram nota acima da media." << endl;

	return 0;
}
