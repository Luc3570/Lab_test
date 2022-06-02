#include<iostream>
using namespace std;

//7. Faça um programa que receba um número e que calcule e mostre a tabuada desse número.

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	int i;
	int tab = 1;
	
	cout<<"Insira o número que deseja a tabuada: ";
	cin>>numero;
	
	for(i = 0; i<10 ; i++)
	{
		cout << " \n " << numero << " x "<< tab << " : " << (numero * tab);
		tab++;
	}

}
