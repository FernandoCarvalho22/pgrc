#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	double ra;
	int senha;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o RA: ");
	scanf("%lf",&ra);
	printf("Digite a SENHA: ");
	scanf("%d",&senha);
	
	//se ra é igual a 92111815 e a senha é igual a 123456 faça isto:
	if(ra==921117589 && senha==123456){
		printf("\n\n");
		printf("Bem vindo ao sistema!");
		} //se não faça isso:
	else{
		printf("Usuário ou senha inválidos!");
	}
		
	printf("\n\n");
	system("pause");

	
}
