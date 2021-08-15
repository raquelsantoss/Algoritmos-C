
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <string.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int Caso_regiao;
	char nome[50],regiao[50];

	
	printf("Olá, seja bem-vindo! Qual é o seu nome?\n");
	fgets(nome,50,stdin);
	printf("\n\nOk, %s Vamos descobrir qual região do Brasil você gostaria de conhecer...\n\n", nome);
	fflush(stdin);
do {
			
		printf("[1] - Ver menu de opções\n"); 
		printf("[0] - Pressione 0 para concluir a escolha\n");
		
		
		scanf("%d", &Caso_regiao); 
			
		switch(Caso_regiao) 
		{	
			case 1:
			printf("Escolha uma das opções abaixo e digite 0 para concluir\n");
			printf("=================\n");
			printf(" Menu de opções\n");
			printf("=================\n");
			printf("2 - Norte\n"); 
			printf("3 - Nordeste\n");
			printf("4 - Centro-Oeste\n"); 
			printf("5 - Sudeste\n"); 
			printf("6 - Sul\n");  
			
			
		
			break;
			
			case 2:
			strcpy(regiao, "Norte"); 
			break;
			case 3:
			strcpy(regiao, "Nordeste");
			case 4:
			strcpy(regiao, "Centro-oeste");
			break;
			case 5:
			strcpy(regiao, "Sudeste");
			break;
			case 6:
			strcpy(regiao, "Sul");
			break;
		
		default:
			Caso_regiao = 0;
		}
	}while(Caso_regiao!=0);
	 system("cls");
	 printf("Você deseja conhecer a região %s!", regiao);
}
	 
	 
	 
	 
