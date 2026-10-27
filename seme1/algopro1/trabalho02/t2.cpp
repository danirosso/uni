/***********************************************************************************************
 **************************************** MASTER SENHA  ****************************************
 ***** CRIADORES: Alison Brito & Daniel Rosso & Gabriel Alves & Luiz Carlos & Romulo Cesar *****
 ***************************************** DATA: 05/26 *****************************************
 ***********************************************************************************************/

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main() {
	int maxTentativas = 9;
	bool loop = true;
	while (loop == true){
		bool jogar = false;
		char option;
		// enquanto o usuario escolher opcoes no menu, o loop se repete, qualquer coisa que nao e uma opcao inicia o jogo
		// mais tarde vamos voltar aqui, o unico jeito de sair desse loop enquanto o  programa executa usando a opcao 'e'
		do{
			cout << "\33c";
			cout << "\t### MENU ###\n"
				"\t  1-[J]ogar\n"
				"\t  2-[s]obre\n"
				"\t  3-[e]ncerrar\n"
				"\t";
			cin >> option;

			switch (option){
				case 's': case 'S': case '2': {
								      cout << "\33c";
								      cout << "\t *** CRIADORES ***\n"
									      "\t*~ Allison Brito ~*\n"
									      "\t*~ Daniel Rosso ~*\n"
									      "\t*~ Gabriel Alves ~*\n"
									      "\t*~ Romulo Cesar ~*\n"
									      "\t--- DATA: 05\\26 ---\n"
									      "\t§§§ PROFESSOR §§§\n"
									      "\t  Rafael Balotin\n"
									      "\n\tENTER para voltar ao menu";
								      cin.ignore();
								      cin.ignore();
								      break;
							      };
				case 'e': case 'E': case '3': {
								      cout << "Ate a proxima!\n";
								      return 0;
							      };
				case 'j': case'J': case '1': {
								     cout << "\33c";
								     jogar = true;
								     break;
							     };
				default: {
						 cout << "Opcao incorreta";
						 cin >> option;
					 };

			}
		}while (jogar == false);

		int n1, n2, n3, n4;
		bool saoIguais=false;
		cout << "Gerando os numeros. \n";

		do {
			srand(time(NULL));			

			do{
				n1 = rand()%10;
			}while (n1 > 6 || n1 < 1);

			do{
				n2 = rand()%10;
			}while (n2 > 6 || n2 < 1);

			do{
				n3 = rand()%10;
			}while (n3 > 6 || n3 < 1);

			do{
				n4 = rand()%10;
			}while (n4 > 6 || n4 < 1);

			saoIguais = n1 == n2 || n2 == n4 || n1 == n3 || n3 == n4 || n2 == n3 || n1 == n4;
		}while(saoIguais);
		// comente o cout e remova o comentario do numeros gerados para testar com mais facilidade
		//cout << "Numeros gerados: " << n1 << n2 << n3 << n4 << endl;
		cout << "\33c";


		//numero gerado, agora o usuario esta jogando!
		bool jogando = true;
		int tentativa = 0;

		while (jogando == true){
			int palpite;
			bool saoIguaisPalpite = false;
			bool saoZero = false;
			int p1, p2, p3, p4;
			do{
				// sempre reiniciamos os parametros do palpite, para evitar que variaveis
				// do palpite passado retornem a um novo palpite
				saoZero = false; saoIguaisPalpite = false; palpite = 0;

				cout << "Digite seu palpite de quatro digitos diferentes menores que 6 e maiores que 0: ";
				cin >> palpite;

				//separamos o numero inserido pelo usuario
				p1 = palpite / 1000;
				p2 = (palpite / 100) % 10;
				p3 = (palpite / 10) % 10;
				p4 = palpite % 10;

				//aqui vemos se os numeros do palpite sao compativeis com as regas de jogo
				saoIguaisPalpite = p1 == p2 || p2 == p4 || p1 == p3 || p3 == p4 || p2 == p3 || p1 == p4;
				if (p1 == 0 || p2 == 0 || p3 == 0 || p4 ==0){
					saoZero = true;
				};

			}while (palpite <=1 || palpite > 6666 || saoIguaisPalpite || saoZero);
			//cout << p1 << p2 << p3 << p4;

			int correto = 0, meioCorreto = 0;

			// agora vamos comparar o palpite do usuario com o numero gerado
			if (n1 == p1) correto++;
			if (n2 == p2) correto++;
			if (n3 == p3) correto++;
			if (n4 == p4) correto++;

			//aqui vamos ver se pelo menos os digitos 
			//existem no numero gerado
			if (p1 == n2 || p1 == n3 || p1 == n4) meioCorreto++;
			if (p2 == n1 || p2 == n3 || p2 == n4) meioCorreto++;
			if (p3 == n1 || p3 == n2 || p3 == n4) meioCorreto++;
			if (p4 == n1 || p4 == n2 || p4 == n3) meioCorreto++;

			//vamos ver se estao todos corretos, e se nao estao, vamos inserir as dicas
			if (correto == 4) {
				cout << "!!! *~  Parabens, voce acertou o numero! ~* !!!\n";
				jogando = false;
			}else {
				cout << "\nTentativas restantes: " << maxTentativas - tentativa << endl;
				cout << "\t-- " << p1 << p2 << p3 << p4 << " --\n";
				cout << correto << " Numero(s) correto(s), no lugar correto \n";
				cout << meioCorreto <<" Numero(s) correto(s), no lugar errado \n";
				//se o palpite passou, e o usuario nao ganhou entao ele conta como uma tentiva 
				tentativa ++;
			}
			//se o numero de tentativas chegar ao maximo, o jogo acaba, mas a variavel de ganho continua falsa
			if (tentativa > maxTentativas) {
				cout << "Voce perdeu, mas nao desista!\n";
				jogando = false;
			}
		}
		// aqui nos saimos do loop "jogando", vamos de volta ao topo do loop principal
		cout << "ENTER para voltar ao menu principal";
		cin.ignore();
		cin.ignore();
	}
}
