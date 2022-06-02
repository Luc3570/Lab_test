#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


using namespace std;



int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	srand(time(0));
	
	int number = rand() % 100;
    int chute;
	int total_tentativa;
	int tentativa = 1;
	int dificuldade;
	
	cout<<"Bem vindo ao jogo da advinhação\n";
	
	cout<<"\nTente acertar o número secreto de 1 a 100\n";
	
	cout<<"\nEscolha o nível de dificuldade (1) Fácil  (2) Médio  (3) Difícil \n ";
	cin>>dificuldade;
	
	switch(dificuldade)
	{
		default:
		    total_tentativa = 20;
			break;
		case 1:
			total_tentativa = 20;
			break;
		case 2:
	        total_tentativa = 12;
			break;
		case 3:
			total_tentativa = 6;
	        break;
	}
	
	for (int i = 1; i <= total_tentativa; i++ )
{
		cout<<"\nTentativa "<< i <<" de " << total_tentativa << " :";
		cin>>chute;
		
	
	
	if (chute == number)
	{
		cout<<"\nParabéns você acertou!!!! ";
		break;
		
	}else if (chute < number){
	
	cout<<"\nO número é maior";
		
	}else if (chute > number){
		
	cout<<"\nO número é menor";
		
	} 
}
	cout<<"\nFim de jogo";
	

	
    
    
	
	
	

    
}
	
	
