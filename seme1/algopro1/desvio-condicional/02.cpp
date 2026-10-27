#include <iostream>
using namespace std;

int main (void){
	int n;
	cout << "Insira um numero inteiro: ";
	cin >> n;
	if (n % 2 == 0){
		cout << "O numero e par";
	}else {
		cout << "O numero e impar";
	};
	return 0;
}
