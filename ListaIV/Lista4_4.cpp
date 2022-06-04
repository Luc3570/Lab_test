#include<iostream>
using namespace std;

//4. Ler 5 números e informar o menor e o maior.

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	int maior;
	int menor;
	
	cout<<"Insira um número: ";
	cin>>numero;
	maior = numero;
	menor = numero;
	
	for(int i = 0; i < 4; i++)
	{
		cout<<"Insira um número: ";
		cin>>numero;
		
		if(numero>maior)
		{
			maior = numero;
		}
		if(numero<menor)
		{
			menor = numero;
		}
	}
	
	cout<<"O menor número digitado foi: "<<menor<<" e o maior foi: "<<maior;
}
