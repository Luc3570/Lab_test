#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

        int idade = 18;
	float altura = 1.73;
	string nome = "Lucas dos Santos";
	char sexo = 'M';
	

int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	 
	
	printf("Nome: %s", nome.c_str());
	printf("\nAltura: %.2f", altura) ;
	printf("\nIdade: %i", idade);
	printf("\nSexo: %c\n", sexo);
	
	printf("tudo certo?");
	
	
	
	return 0;
}
