// Nome: Raquel dos Santos Rezende
// Matricula: UC21100930 
// Curso: Ciência da Computação

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i, num;
	
	printf("Digite um número inteiro de 1 a 2000: ");
	scanf("%d", &num);
	fflush(stdin);
	
	if(num<2001){
		for(i=1;i<=num;i++){
			if(i%2==0)
			printf("%d - ",i);
		}
	} else{
		system("cls");
		printf("\n\n\n       %d - limite de cálculo excedido\n\n\n", num);
	}
	
	return 0;
}
