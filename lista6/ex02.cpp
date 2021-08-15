

#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero, resultado, i = 1;
	
	do { 
		printf("Insira um número inteiro para visualizar seu fatorial: ");
		scanf("%i", &numero);
		system("cls");
	} while (numero < 0);
	
	
	resultado = numero; 
	while (i < numero) {
		resultado *= i;
		i ++;
	}
	
	printf("%i! = %i", numero, resultado); 
}
