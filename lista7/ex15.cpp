//Nome: Raquel dos Santos Rezende 
//Matricula: UC21100930
//Curso: Ci�ncia da Computa��o
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	
	int i,j,contador=1;
	char string[30],posicao2;
	int tamanho;
	char pesquisa;
	setlocale(LC_ALL,"Portuguese");
	
	printf("------------------------------\n");
	printf("ordem alfab�tica de uma string\n");
	printf("------------------------------\n");
	
		printf("Digite o tamanho da palavra: ");
			while(scanf("%d",&tamanho)!=1){
				printf("Digite um valor inteiro: ");
					while(getchar()!='\n');
			}
			
			if(tamanho<=0 || tamanho>30){
				while(tamanho<=0 || tamanho>30){
					printf("Tamanho m�nimo n�o inv�lido!\n");
					printf("Ou tamanho m�ximo estourado\n");
					printf("Digite o tamanho da palavra: ");
						scanf("%d",&tamanho);
			}
		}
fflush(stdin);	
for(i=0;i<tamanho;i++){
	fflush(stdin);	
	printf("Digite o %d� caractere da palavra: ",contador);
		scanf("%c",&string[i]);
		contador++;
}

printf("\nPressione qualquer bot�o para continuar!\n");
system("Pause");
system("cls");

fflush(stdin);
	printf("Digite um caracter que queira pesquisar na frase: ");
		scanf("%c",&pesquisa);
		
		for(i=0;i<tamanho;i++){
			if(pesquisa==string[i]){
				printf("O caractere pesquisado se encontra na frase!\n");
				break;
			}else{
				printf("O caractere pesquisado n�o se encontra na frase!\n");
				break;
			}
		}
	printf("Obrigado por utilizar nosso sistema! :)");
	return 0;
}
