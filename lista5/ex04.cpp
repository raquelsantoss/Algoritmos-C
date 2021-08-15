
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <string.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int Caso_loja;
	char movel[50], nome[50];
	
	printf("Olá, seja bem-vindo! Qual é o seu nome?\n");
	fgets(nome,50,stdin);
	printf("\n\nOk, %s vamos te apresentar os móveis disponíveis da nossa loja...\n\n", nome);
	fflush(stdin);
	
	do {
			
		printf("[1] - Ver lista de móveis\n"); 
		printf("[0] - Pressione 0 para concluir a escolha\n");
		
		
		scanf("%d", &Caso_loja); 
			
		switch(Caso_loja) 
		{	
			case 1:
			printf("Escolha uma das opções abaixo e digite 0 para concluir\n");
			printf("=====================================\n");	
			printf(" Loja Info - móveis disponíveis\n");
			printf("==================================\n");
			printf("1 - Cadeira\n"); 
			printf("2 - mesa de computador\n");
			printf("3 - Estante de livros\n"); 
			printf("4 - Mesa de impressora\n"); 
			printf("5 - Estante de CD\n"); 
			
			
			break;
		
			case 2:
			strcpy(movel, "Cadeira"); 
			break;
			case 3:
			strcpy(movel, "Mesa de computador");
			case 4:
			strcpy(movel, "Estante de livros");
			break;
			case 5:
			strcpy(movel, "Mesa de impressora");
			break;
			case 6:
			strcpy(movel, "Estante de CD");
		break;
		
		default:
			printf("\n\nHumm opção inválida, ainda não temos este item na loja!\n");
			
			}
	}while(Caso_loja!=0);
			
	 system("cls");
	 printf("Você solicitou a opção: %s!", movel);
			 
}
	
	
	
