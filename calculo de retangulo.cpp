#include<stdio.h>		//Funções: printf(), scanf ()
#include<stdlib.h>		//Função: system()
#include<locale.h>

int main () {
	int lado1, lado2, soma;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite quantos metros tem o lado 1 do retângulo: ");
	scanf("%d",&lado1);
	
	printf("Digite quantos metros tem o lado 2 do retângulo: ");
	scanf("%d",&lado2);	

	soma = lado1 * lado2;
	
	printf("A área do retângulo é %d m2", soma);
	
	printf("\n\n");
	
	printf("pause");
	
}

