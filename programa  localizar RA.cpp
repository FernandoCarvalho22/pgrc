#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
	
	double ra[10], numeroRa;
	int encontrados[10];
	int i=0;
	
	for(i=0;i<=9;i++){
		printf("Digite o ra para o indice %d: ",i);
		scanf("%lf",&ra[i]);
	}
	
	printf("\nDigite um numero para pesquisar: ");
	scanf("%lf",&numeroRa);
	
	
	int qtd_encontrada = 0;
	for(i=0;i<=9;i++){
		if (numeroRa==ra[i]){
			//printf("Número encontrado no indice %d!!!\n",i);
			encontrados[qtd_encontrada] = i;
			qtd_encontrada++;
		}
	}	
	if (qtd_encontrada==0){
		printf("RA não encontrado!\n");
	}else{
		printf("Foram encontradas %d ocorrencias do RA = %.0lf",qtd_encontrada,numeroRa);
		printf("\nO RA foi encontrado nos indices:  ");
		for(i=0;i<qtd_encontrada;i++){
			printf("%d, ",encontrados[i]);
		}
	}
	
	/*
	bool achou = false;
	for(i=0;i<=9;i++){
		if (numeroRa==ra[i]){
			printf("Número encontrado no indice %d!!!\n",i);
			achou = true;
		}
	}	
	if (achou==false){
		printf("Número não encontrado!\n");
	}
	*/
			
	printf("\n\n");
	system("pause");
}
