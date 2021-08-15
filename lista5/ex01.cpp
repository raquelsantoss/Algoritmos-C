
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	float porcentagem;
	
	
	printf("Digite um número inteiro qualquer:\n");
	scanf("%d",&numero);
	
	porcentagem =  (numero * 555) * 100;
	
	printf("O porcentual do número digitado na constante 555 é: %.2f",porcentagem);
	
	return 0;
	
}

