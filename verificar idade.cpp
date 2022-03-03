#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
	int idade, ano_nasc, ano_atual;
	
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o ano de nascimento: ");
	scanf("%d",&ano_nasc);
	printf("Digite o ano atual: ");
	scanf("%d",&ano_atual);
	
	idade = ano_nasc - ano_atual;
	
	printf("\n\Sua idade é  %d \n\n:",idade);
	
	if(idade > 17) {
		printf("Maior de idade");
	}
	else {
		printf("Menor de idade");
	}
	
	printf("\n\n");
	system("pause");
}
