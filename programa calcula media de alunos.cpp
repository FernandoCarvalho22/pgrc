#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	float nota1, nota2, media;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf ("Digite a nota1: ");
	scanf ("%f",&nota1);
	printf ("Digite a nota2: ");
	scanf ("%f",&nota2);
	
	media = (nota1 + nota2)/2; 
	
	printf("\nSua m�dia foi %.2f\n\n",media);
	
	if ( media < 3) {
	printf("Reprovado! Voc� foi p�ssimo!");
	} else if ( media < 6) {
	printf("Reprovado! Voc� est� de DP!");
	} else if (media < 7){
	printf("Aprovado! Passou por pouco!");
	} else if (media < 9){
	printf("Aprovado! Voc� foi bem!");
	} else if (media <=10){
	printf("Aprovado! Voc� foi �timo!");
	}
	
	printf("\n\n");
	printf("pause");
	
}
