/* menu do joguinho */
#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int tst;
	cout<<"******************";
	cout<<"\n*                *";
	cout<<"\n*     Menu       *";
	cout<<"\n*                *";
	cout<<"\n* 1 - Jogar      *\n* 2 - Instru��es * \n* 3 - Creditos   *"; 
	cout<<"\n*                *";
	cout<<"\n******************";
	cout<<"\n";
	cin>>tst; //Leitura de variavel
	
		if (tst==1){
			cout<<"Voc� deseja iniciar o jogo? (S- Sim ou N- N�o)\n";
			char op;
			cin>>op;
			switch (op){
				case 's':
					
				break;
					
				case 'n':
					cout<<"O jogo ser� finalizado";
					system ("exit");
				break;		
				}
			}
			
			
		else if (tst==2){
			system ("cls");
			cout<<"\nO jogo da forca � um jogo em que o jogador tem que acertar qual � a palavra proposta,";
			cout<<"\ntendo como dica o n�mero de letras e o tema ligado � palavra. ";
			cout<<"\nO jogo termina ou com o acerto da palavra ou com o jogador ''sendo do enforcado''.\n";
			cout<<"\nDeseja voltar ao menu? (S- Sim ou N- N�o) ";
			char menu;
			cin>>menu;
			switch (menu){
				case 's':
					system ("cls");
					return main ();
				break;
					
				case 'n':
					system ("exit");
				break;								
			}
		}

		else if (tst==3){
			cout<<"\nPaulo & Pedro\n";
		}
}

