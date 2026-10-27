#include <iostream>
using namespace std;

int main (void){
	int soma;

	for(int i = 100; i <= 200; i++){
		cout << soma << "+" << i << "=";
		soma += i;
		cout << soma << "\n";
	};
	return 0;
}
