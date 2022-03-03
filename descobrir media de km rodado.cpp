#include<stdio.h>		//Funções: printf(), scanf ()
#include<stdlib.h>		//Função: system()
#include<locale.h>

int main () {
	float km_rodado, horas, velocidade_media;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe os kms rodados: ");
	scanf("%f",&km_rodado);
	
	printf("Informe o tempo de viagem em horas: ");
	scanf("%f",&horas);	

	velocidade_media = km_rodado / horas; 
	
	printf("A velocidade média é %.2f km/h", velocidade_media);
	
	printf("\n\n");
	
	system("pause");
	
}
