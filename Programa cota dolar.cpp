#include<stdio.h>		//Fun��es: printf(), scanf ()
#include<stdlib.h>		//Fun��o: system()
#include<locale.h>

int main () {
	int dolar, cota_dolar, soma;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o valor h� converter em d�lar: ");
	scanf("%d",&dolar);
	
	printf("Digite a cota��o em real do d�lar: ");
	scanf("%d",&cota_dolar);	

	dolar = dolar * cota_dolar; 
	
	printf("Total: R$ %d reais", dolar);
	
	printf("\n\n");
	printf("pause");
	
}


