
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	
	int vetorA[10], vetorB[10],vetorC[10],i,pesquisa;
	
		setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("---------------------\n");
	printf("Concatenação de Vetor\n");
	printf("---------------------\n");



		printf("Vetor A");
	for(i=0;i<10;i++){
		printf("\nDigite um valor: ");
			scanf("%d",&vetorA[i]);
	}
	
	printf("\n");



		printf("Vetor B");
	for(i=0;i<10;i++){
		printf("\nDigite um valor: ");
			scanf("%d",&vetorB[i]);
	}
		printf("\n");



for(i=0;i<10;i++){
	vetorC[i] = vetorA[i] + vetorB[i];
}




printf("\n");
	printf("Vetor A: ");	
	for(i=0;i<10;i++){
		printf("%d  ",vetorA[i]);
	}
		printf("\n");
		


	printf("Vetor B: ");
	for(i=0;i<10;i++){
			printf("%d ",vetorB[i]);
	}
		printf("\n");
		


	printf("Vetor C: ");
	for(i=0;i<10;i++){
			printf("%i ",vetorC[i]);
	}
	
	printf("\nDigite um valor para pesquisar: ");
		scanf("%d",&pesquisa);
		
		system("cls");
		
		printf("-------------\n");
		printf("  Resultado  \n");
		printf("-------------\n");
		
		for(i=0;i<10;i++){
			if(pesquisa==vetorC[i]){
				printf("O valor digitado se encontra no vetor");
				break;
			}else{
				printf("O valor digitado não se encontra no vetor");
				break;
			}
		}
	return 0;		
}
