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
	
	//se ra � igual a 92111815 e a senha � igual a 123456 fa�a isto:
	if(ra==921117589 && senha==123456){
		printf("\n\n");
		printf("Bem vindo ao sistema!");
		} //se n�o fa�a isso:
	else{
		printf("Usu�rio ou senha inv�lidos!");
	}
		
	printf("\n\n");
	system("pause");

	
}
