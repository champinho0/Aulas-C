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
	cout<<"\n* 1 - Jogar      *\n* 2 - Instruções * \n* 3 - Creditos   *"; 
	cout<<"\n*                *";
	cout<<"\n******************";
	cout<<"\n";
	cin>>tst; //Leitura de variavel
	
		if (tst==1){
			cout<<"Você deseja iniciar o jogo? (S- Sim ou N- Não)\n";
			char op;
			cin>>op;
			switch (op){
				case 's':
					
				break;
					
				case 'n':
					cout<<"O jogo será finalizado";
					system ("exit");
				break;		
				}
			}
			
			
		else if (tst==2){
			system ("cls");
			cout<<"\nO jogo da forca é um jogo em que o jogador tem que acertar qual é a palavra proposta,";
			cout<<"\ntendo como dica o número de letras e o tema ligado à palavra. ";
			cout<<"\nO jogo termina ou com o acerto da palavra ou com o jogador ''sendo do enforcado''.\n";
			cout<<"\nDeseja voltar ao menu? (S- Sim ou N- Não) ";
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

