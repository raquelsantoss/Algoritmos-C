//Nome: Raquel dos Santos Rezende 
//Matricula: UC21100930
//Curso: Ci�ncia da Computa��o
#include<stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int contador, opcao, numero[80], vezes = 0, comparado, salvo = 0;
	
	for(contador=0;contador<80;contador++){
	printf("n�mero a ser cadastrado: ");
	scanf("%i",&numero[contador]);
	salvo++;
	
	printf("digite 0 se deseja finalizar: ");
	scanf("%i",&opcao);
	
	if(opcao==1)contador=80;}
	printf("digite o n�mero que deseja comparar: ");
	scanf("%i",&comparado);

	for(contador=0;contador<salvo;contador++){
		if(comparado==numero[contador]){vezes++;
		printf("posi��es onde s�o encontrados valores iguais: %i \n",contador);
		}
	}
	printf("vezes repetidas: %i \n",vezes);

	return 0;
}
