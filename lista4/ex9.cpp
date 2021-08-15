
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numeroImaginado = 0, totalChutes = 0, numeroAtual = 0;
	
	printf("Qual o n�mero imaginado? ");
	scanf("%d", &numeroImaginado);
	
	do {
		printf("Qual o n�mero ser� chutado? ");
		scanf("%d", &numeroAtual);
		totalChutes++;
		if(numeroAtual > numeroImaginado){
			printf("\nVoc� errou!\n");
			printf("Chute um n�mero menor!\n");
		}else{
			printf("\nVoc� errou!\n");
			printf("Chute um n�mero maior!\n");
		}
	} while(numeroAtual != numeroImaginado);
	
	system("cls");
	printf("N�mero Imaginado: %d \n", numeroImaginado);
	printf("Total Chutes: %d \n", totalChutes);
	
	return 0;
}
