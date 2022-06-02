#include<iostream>
using namespace std;

//6. Ler N números e contar quantos são pares. O programa deve parar quando ler um múltiplo de 11.

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	int pares = 0;
	
	while(true)
	{
		cout<<"Insira um número: ";
		cin>>numero;
		
		if(numero % 2 == 0)
		{
			pares++;
		}
		if(numero % 11 == 0)
		{
			break;
		}
	}
	
	cout<<"Números pares inseridos até um múltiplo de onze ser digitado: "<<pares;
}
