#include <iostream>
#include <math.h>
using namespace std;
main ()
{
	setlocale(LC_ALL,"Portuguese");
	int x[4][4],contC,contL;
	for(contL=0;contL<4;contL++)
	{
		for(contC=0;contC<4;contC++)
		{
			cout<<"Digite um número: ";
			cin>>x[contL][contC];}
	}
	for(contL=0;contL<4;contL++)
	{
		for(contC=0;contC<4;contC++)
		{
			if(x[contL][contC]>10)
				cout<<"\n"<<x[contL][contC];
		}
	}
	
}

