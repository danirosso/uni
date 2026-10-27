#include <iostream>
using namespace std;

int main (void){
	int h, m;
	cout << "Insira hora: ";
	cin >> h;
	cout << "Insira minuto: ";
	cin >> m;
	if (h > 24 || m > 59){
		cout << "Esta hora e invalida";
	}else {
		cout << "Esta hora e valida";
	};
	return 0;
}
