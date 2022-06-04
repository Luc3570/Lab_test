#include<iostream>
using namespace std;

//5. Faça um programa em que o usuário digite 2 valores e se a soma deles for maior que 15 o programa encerra, caso contrário, repete.

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valor1, valor2;
	int soma;
	
	while(true)
	{
		cout<<"Insira um número: ";
		cin>>valor1;
		
		cout<<"Insira outro número: ";
		cin>>valor2;
		
		soma = valor1 + valor2;
		
		if(soma > 15)
		{
			break;
		}
	}
	
}
