#include <iostream>
using namespace std;

int main (void){
	float kmLitro, kmDist, precoLitro;
	cout << "Insira a distancia: ";
	cin >> kmDist;
	cout << "Insira o preco do litro de gasolina: ";
	cin >> precoLitro;
	cout << "Insira a media de km/l do veiculo: ";
	cin >> kmLitro;
	cout << "Esta viagem vai custar em torno de: R$" << (kmDist / kmLitro) * precoLitro;
	return 0;
}
