#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main(){
	int idade;			//especificador de formato
	float peso;			//%f
	double ra;			//%lf
	char nota;			//%c
	char nome[50]; 		//%s
	
	printf("Digite a idade: ");
	scanf("%d",&idade);
	
	printf("Digite o peso: ");
	scanf("%f",&peso);
	
	printf("Digite o ra: ");
	scanf("%lf",&ra);
	
	printf("Digite a nota: ");
	fflush(stdin); //limpa o buffer do teclado 
	nota = getchar();
	
	printf("Digite o nome: ");
	fflush(stdin); //limpa o buffer do teclado 
	gets(nome); 
	
	printf("\n\ndados cadastrados:\n\n");
	
	printf("Idade = %d\n", idade);
	printf("Peso = %.2f\n", peso);
	printf("RA = %.0lf\n", ra);
	printf("Nota = %c\n", nota);
	printf("Nome = %s\n\n", nome);
	
	system ("pause");
}
