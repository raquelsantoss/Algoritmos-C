
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	float porcentagem;
	
	
	printf("Digite um n�mero inteiro qualquer:\n");
	scanf("%d",&numero);
	
	porcentagem =  (numero * 555) * 100;
	
	printf("O porcentual do n�mero digitado na constante 555 �: %.2f",porcentagem);
	
	return 0;
	
}

