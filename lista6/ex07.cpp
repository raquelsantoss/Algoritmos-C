
// Nome: Raquel dos Santos Rezende
//Matricula: UC21100930
//Curso: Ci�ncia da Computa��o
#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao, quantidadeVotos[4] = {0};
	
	do {
		printf("Insira o n�mero do voto (25 - Pel�, 33 - Maradona, 0 - em branco, qualquer outro n�mero � nulo, -1 finaliza): ");
		scanf("%i", &opcao);
		system("cls");
		
		if (opcao != -1) {
			switch(opcao) {
				case 25: //pel�
					quantidadeVotos[0] ++; 
				break;
				case 33: //maradona
					quantidadeVotos[1] ++; 
				break;
				case 0: //branco
					quantidadeVotos[2] ++; 
				break;
				default: //nulo
					quantidadeVotos[3] ++; 
				break;
			}	
		}
	} while (opcao != -1);
	
	//sa�da
	if (quantidadeVotos[0] == quantidadeVotos[1]) { //caso empate
		printf("Empate ente Pel� e Maradona\n");
	} else {
		printf("Pel�: %i\n", quantidadeVotos[0]); 
		printf("Maradona: %i\n", quantidadeVotos[1]);
	}
	printf("\nVotos em branco: %i\n", quantidadeVotos[2]);
	printf("Votos nulos: %i", quantidadeVotos[3]);
	
}
