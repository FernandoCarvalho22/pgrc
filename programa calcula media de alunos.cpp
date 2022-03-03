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
	
	printf("\nSua média foi %.2f\n\n",media);
	
	if ( media < 3) {
	printf("Reprovado! Você foi péssimo!");
	} else if ( media < 6) {
	printf("Reprovado! Você está de DP!");
	} else if (media < 7){
	printf("Aprovado! Passou por pouco!");
	} else if (media < 9){
	printf("Aprovado! Você foi bem!");
	} else if (media <=10){
	printf("Aprovado! Você foi ótimo!");
	}
	
	printf("\n\n");
	printf("pause");
	
}
