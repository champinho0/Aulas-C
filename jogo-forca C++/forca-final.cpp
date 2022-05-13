#include <iostream>
#include <locale.h>
#include<string.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "Portuguese");
	
	cout<<"******************"; // inicio do menu, parte estética
	cout<<"\n*                *";
	cout<<"\n*     Menu       *";
	cout<<"\n*                *";
	cout<<"\n* 1 - Jogar      *\n* 2 - Instruções * \n* 3 - Créditos   *"; 
	cout<<"\n*                *";
	cout<<"\n******************";
	cout<<"\n\n";// fim da parte estética
	int tst; //variável de opções
	cin>>tst; // leitura da variável de opções
	
		if (tst==1){ // início da 1ª opção do menu
				cout<<"\nVocê deseja iniciar o jogo? (S- Sim ou N- Não) ";
				char op; // variável para opção
				cin>>op;// leitura 
				switch (op){ // switch para confirmação de inicialização do jogo ou não
			
					case 'n':// opção para retornar ao menu do jogo
						cout<<"\nVocê retornará ao menu principal...\n\n";
						system ("pause");
						system ("cls");
						return main();
					break;
			
					case 's':// opção para inicialização do jogo
					
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
								cout<<"\n___________   \n|         |   \n|        _|_\n|         O	 Você me matou, seu MALDITO !!! :(   \n|        /|\\    \n|        / \\ \n| \n| \n| \n";
								cout<<"\n A PALAVRA ERA: "<<palavra;
								break;
							}
							
							else
							cout<<"\n VOCE ERROU! RESTAM VIDA(S) "<<vida;
					 	}
				
				
						else{
							if(pontos==tam_palavra){
								cout<<"\n\n VOCE GANHOU!";
								cout<<"\n___________ \n|         | \n|        _|_\n|\n|		To vivo aôôôôôôôôôôô tchê tchê tchê!!!\n|        \\O/\n|         | \n|        / \\\n|\n\n";
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
		} // fim da 1ª opção do menu
			
			
		else if (tst==2){ // início da 2º opção do menu
			system ("cls");
			cout<<"\nO jogo da forca é um jogo em que o jogador tem que acertar qual é a palavra proposta,";
			cout<<"\ntendo como dica o número de letras e o tema ligado à palavra. ";
			cout<<"\nO jogo termina ou com o acerto da palavra ou com o jogador ''sendo do enforcado''.\n";
			cout<<"\nDeseja voltar ao menu? (S- Sim ou N- Não) ";
			char menu;// variável para menu
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
		}// fim da 2ª opção do menu

		else if (tst==3){ // inicio da 3ª opção do menu
			system ("cls");
			cout<<"\nPaulo & Pedro\n";
			cout<<"\nDeseja voltar ao menu? (S- Sim ou N- Não) ";
			char menu;// variável para menu
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

