#include<iostream>
using namespace std;

//3. Ler a idade de 10 pessoas e imprimir quantas são maiores de idade.

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	int result = 0;
	
	for(int i = 0; i<10; i++)
	{
		cout<<"Insira sua idade: ";
		cin>>idade;
		
	    if (idade >= 18)
	    {
		 result++;
	    } 
	
	}
	
	cout<<"O total de maiores de idade é: "<< result;
}
