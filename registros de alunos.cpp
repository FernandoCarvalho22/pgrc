#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Aluno{
	double ra;
	char nome[30];
	bool estaVazio;
};

int main(){
	struct Aluno al[5];
	int opcao;
	int i;
	
	for (i=0;i<=4;i++){
		al[i].estaVazio = true;
	}	
	
	do{
		system("cls");
		printf("Bem vindo ao sistema de cadastro\n\n");
			
		printf("1 - Cadastrar\n");
		printf("2 - Consultar por RA\n");	
		printf("3 - Lista todos\n");
		printf("4 - Sair\n");
		
		printf("\nDigite a opcao: ");
		scanf("%d",&opcao);
		
		system("cls");
		
		switch(opcao){
			case 1:
				   
				   printf("Cadastro de Aluno:\n\n");
			       printf("Digite o RA..: ");
			       printf("Digite o NOME: ");
			       printf("\n\nEm desenvolvimento....");
				   break;
			case 2:
				   printf("Consultar Aluno:\n\n");
				   printf("Digite o RA..:\n");
				   printf("RA nao encontrado!\n");
				   printf("Encontrado! O que deseja fazer:\n\n");
				   printf("1 - Alterar\n");
				   printf("2 - Remover\n");			   
				   printf("\n\nEm desenvolvimento....");
				   break;
			case 3:
				   printf("Lista completa de alunos cadastrados:\n\n");
				   printf("\n\nEm desenvolvimento....");
				   break;
			case 4:
				   printf("Saindo do programa...\n");
				   break;
			default: 
				   printf("Opcao invalida!!!");
				   break;				   
		}
		
		printf("\n\n");
		system("pause");
			
	}while(opcao!=4);	
	
}
