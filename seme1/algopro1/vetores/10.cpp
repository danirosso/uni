#include <iostream>
using namespace std;

int main (){
	int vector[5], seven_counter = 0;

	for (int i = 0; i < 5; i++){
		cout << "Insira o valor [" << i << "]: ";
		cin >> vector[i];
	}

	for (int i = 0; i < 5; i++){
		if (vector[i] == 7) {
			cout << "Valor [" << i << "] = 7." << endl;
			seven_counter++;
		}
	}

	cout << "Foram inseridos " << seven_counter << " setes";
	return 0;
}
