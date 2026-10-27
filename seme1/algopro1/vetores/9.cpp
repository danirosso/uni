#include <iostream>
using namespace std;
#define SIZE 30

int main (){

	int a[SIZE], b[SIZE], buffer;

	for (int i = 0; i < SIZE; i++){
		cout << "Insira a[" << i << "]: ";
		cin >> a[i];
		cout << "Insira b[" << i << "]: ";
		cin >> b[i];
	}

	for (int i = 0; i < SIZE; i++){
		buffer = a[i];
		a[i] = b[i];
		b[i] = buffer;
		cout << "a[" << i << "] = " << a[i] << endl;
		cout << "b[" << i << "] = " << b[i] << endl;
	}

	return 0;
}
