#include<iostream>
using namespace std;

float tanque;
float consumo;         // variaveis
float distancia;
float valor;

int main (){
	
	setlocale(LC_ALL,"Portuguese");  // ajeitando os sinais 
	
	cout<<"Qual a capacidade do seu tanque em litros?";
	cin>> tanque;
	
	cout<<"Qual o consumo (Km/Litro) médio do seu automóvel?";
	cin>> consumo;
	
	cout<<"Qual distância será percorrida?";
	cin>> distancia;
	
	cout<<"Qual o valor do combustível?";
	cin>> valor;
	
	cout<<"\nSerá necessário para viagem: " << distancia / consumo << " litros";
	cout<<"\nSerá necessário parar para abastecer: " << int ( distancia / (tanque * consumo))<< " vezes"; 
	cout<<"\nSerá gasto na viagem: " << (distancia / consumo) * valor << " reais";
	
	
	
	
}
