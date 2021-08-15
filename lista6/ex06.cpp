// Nome: Raquel dos Santos Rezende
//Matricula: UC21100930
//Curso: Ciência da Computação

#include<stdio.h>
#include<string.h>
#include<locale.h>

int main(){
	
int valor;
	
setlocale(LC_ALL,"Portuguese");
	

	
	printf("Digite um valor inteiro: ");
		
		while(scanf("%d",&valor)!=1){
			printf("Digite apenas valores inteiros: ");
			fflush(stdin);
			while(getchar()!='\n');
		}
			
			
		printf("O valor inteiro %d tem um tamanho de %zu algarismos",valor,sizeof(valor));
	
	return 0;
}
