#include<stdio.h>		//Fun��es: printf(), scanf ()
#include<stdlib.h>		//Fun��o: system()
#include<locale.h>

int main () {
	int lado1, lado2, soma;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite quantos metros tem o lado 1 do ret�ngulo: ");
	scanf("%d",&lado1);
	
	printf("Digite quantos metros tem o lado 2 do ret�ngulo: ");
	scanf("%d",&lado2);	

	soma = lado1 * lado2;
	
	printf("A �rea do ret�ngulo � %d m2", soma);
	
	printf("\n\n");
	
	printf("pause");
	
}

