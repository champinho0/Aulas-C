#include <iostream>
#include <locale.h>
#include<string.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "Portuguese");
	
	cout<<"******************"; // inicio do menu, parte est�tica
	cout<<"\n*                *";
	cout<<"\n*     Menu       *";
	cout<<"\n*                *";
	cout<<"\n* 1 - Jogar      *\n* 2 - Instru��es * \n* 3 - Cr�ditos   *"; 
	cout<<"\n*                *";
	cout<<"\n******************";
	cout<<"\n\n";// fim da parte est�tica
	int tst; //vari�vel de op��es
	cin>>tst; // leitura da vari�vel de op��es
	
		if (tst==1){ // in�cio da 1� op��o do menu
				cout<<"\nVoc� deseja iniciar o jogo? (S- Sim ou N- N�o) ";
				char op; // vari�vel para op��o
				cin>>op;// leitura 
				switch (op){ // switch para confirma��o de inicializa��o do jogo ou n�o
			
					case 'n':// op��o para retornar ao menu do jogo
						cout<<"\nVoc� retornar� ao menu principal...\n\n";
						system ("pause");
						system ("cls");
						return main();
					break;
			
					case 's':// op��o para inicializa��o do jogo
					
						system ("cls");
						char tam_palavra,palavra[25],letra[25],lacuna[25]="_";
						int vida=3,x,i,pontos=0;
						cout<<"___________   \n|         |   \n|        _|_\n|          \n|        \ \n|         \n| \n| \n| \n\n"; 
						cout<<"\n\nDigite a palavra secreta:\n\n";
						cin>>palavra;
						system("cls");
	
						for(i=0;i<strlen(palavra);i++)
						lacuna[i]='-';
						tam_palavra=strlen(palavra);
	
					while(vida>0){
						x=0;
						cout<<"\n  \n",lacuna;
						cout<<"\n digite uma letra: ";
						cin>>letra;
				
						for(i=0;i<strlen(palavra);i++)
							{
								if(letra[0]==palavra[i]){	
										lacuna[i]=palavra[i];
										pontos++;
										x++;
									}
							}
						if(x==0){
							vida=vida-1;
				
							if(vida==0){
								cout<<"\n\n VOCE FOI ENFORCADO!";
								cout<<"\n___________   \n|         |   \n|        _|_\n|         O	 Voc� me matou, seu MALDITO !!! :(   \n|        /|\\    \n|        / \\ \n| \n| \n| \n";
								cout<<"\n A PALAVRA ERA: "<<palavra;
								break;
							}
							
							else
							cout<<"\n VOCE ERROU! RESTAM VIDA(S) "<<vida;
					 	}
				
				
						else{
							if(pontos==tam_palavra){
								cout<<"\n\n VOCE GANHOU!";
								cout<<"\n___________ \n|         | \n|        _|_\n|\n|		To vivo a����������� tch� tch� tch�!!!\n|        \\O/\n|         | \n|        / \\\n|\n\n";
								cout<<"\n A PALAVRA E: "<<palavra;
								break;
								}
								else {
								cout<<"\n VOCE ACERTOU UMA LETRA!";}
						}	
					}
					cout<<"\n\n";
					system("pause");
					return 0;
					break;
				}
		} // fim da 1� op��o do menu
			
			
		else if (tst==2){ // in�cio da 2� op��o do menu
			system ("cls");
			cout<<"\nO jogo da forca � um jogo em que o jogador tem que acertar qual � a palavra proposta,";
			cout<<"\ntendo como dica o n�mero de letras e o tema ligado � palavra. ";
			cout<<"\nO jogo termina ou com o acerto da palavra ou com o jogador ''sendo do enforcado''.\n";
			cout<<"\nDeseja voltar ao menu? (S- Sim ou N- N�o) ";
			char menu;// vari�vel para menu
			cin>>menu;// leitura
			switch (menu){// switch para retornar ao menu ou fechar o jogo
			
				case 's': // retorno ao menu
					system ("cls");
					return main ();
				break;
					
				case 'n': // finaliza o jogo
					system ("exit");
				break;								
			}
		}// fim da 2� op��o do menu

		else if (tst==3){ // inicio da 3� op��o do menu
			system ("cls");
			cout<<"\nPaulo & Pedro\n";
			cout<<"\nDeseja voltar ao menu? (S- Sim ou N- N�o) ";
			char menu;// vari�vel para menu
			cin>>menu;// leitura
			switch (menu){// switch para retornar ao menu ou fechar o jogo
			
				case 's': // retorno ao menu
					system ("cls");
					return main ();
				break;
					
				case 'n': // finaliza o jogo
					system ("exit");
				break;								
			}		
		}
}

