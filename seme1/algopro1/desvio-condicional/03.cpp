#include <iostream>
using namespace std;

int main (void){
	char l;
	cout << "Insira uma letra: ";
	cin >> l;
	switch (l){
		case 'a': case 'e': case 'i': case 'o': case 'u':
		cout << "A letra e uma vogal";
		break;
	default:
		cout << "A letra e uma consoante";
		break;
	};
	return 0;
}
