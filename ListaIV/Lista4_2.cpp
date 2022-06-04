#include<iostream>
using namespace std;

//2. Ler 5 números e informar quantos desses eram ímpares.

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	int result = 0;
	
	for(int i = 0; i<5; i++)
	{
		cout<<"Insira um número: ";
		cin>>numero;
		
	    if (numero % 2 != 0)
	    {
		 result++;
	    } 
	
	}
	
	cout<<"O total de números que eram ímpares é: "<< result;
}
