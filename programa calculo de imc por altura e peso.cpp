#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
// programa para descobrir seu IMC (Índice de massa corporal)	ling C
int main () {
	float	peso, altura, imc;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf ("Digite o peso: ");
	scanf ("%f",&peso);
	printf ("Digite a altura: ");
	scanf ("%f",&altura);
	
	imc = peso / (altura * altura);
		
	printf("\nSeu IMC foi %.2f\n\n",imc);
	
	if (imc < 18.5) {
	printf("Peso Baixo");}
	else if (imc > 18.5  < 24.9) {
	printf("Peso Normal");}
	else if (imc > 25 < 30) {
	printf("Sobrepeso");}
        else if (imc > 30 < 35) {
	printf("Obesidade Grau I");}
	else if (imc > 35 < 40){ printf("Obesidade Grau II");}
	else if (imc >= 40) {
	printf("Obesidade Mórbita Grau III");}

    printf ("\n\n");
    printf ("pause");
    

}


