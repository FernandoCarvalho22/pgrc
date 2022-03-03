#include<stdio.h>		//Funções: printf(), scanf ()
#include<stdlib.h>		//Função: system()
#include<locale.h>

int main () {
	int dolar, cota_dolar, soma;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o valor há converter em dólar: ");
	scanf("%d",&dolar);
	
	printf("Digite a cotação em real do dólar: ");
	scanf("%d",&cota_dolar);	

	dolar = dolar * cota_dolar; 
	
	printf("Total: R$ %d reais", dolar);
	
	printf("\n\n");
	printf("pause");
	
}


