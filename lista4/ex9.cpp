
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numeroImaginado = 0, totalChutes = 0, numeroAtual = 0;
	
	printf("Qual o número imaginado? ");
	scanf("%d", &numeroImaginado);
	
	do {
		printf("Qual o número será chutado? ");
		scanf("%d", &numeroAtual);
		totalChutes++;
		if(numeroAtual > numeroImaginado){
			printf("\nVocê errou!\n");
			printf("Chute um número menor!\n");
		}else{
			printf("\nVocê errou!\n");
			printf("Chute um número maior!\n");
		}
	} while(numeroAtual != numeroImaginado);
	
	system("cls");
	printf("Número Imaginado: %d \n", numeroImaginado);
	printf("Total Chutes: %d \n", totalChutes);
	
	return 0;
}
