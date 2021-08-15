
#include<stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int contador, opcao, numero[80], vezes = 0, comparado, salvo = 0;
	
	for(contador=0;contador<80;contador++){
	printf("número a ser cadastrado: ");
	scanf("%i",&numero[contador]);
	salvo++;
	
	printf("digite 0 se deseja finalizar: ");
	scanf("%i",&opcao);
	
	if(opcao==1)contador=80;}
	printf("digite o número que deseja comparar: ");
	scanf("%i",&comparado);

	for(contador=0;contador<salvo;contador++){
		if(comparado==numero[contador]){vezes++;
		printf("posições onde são encontrados valores iguais: %i \n",contador);
		}
	}
	printf("vezes repetidas: %i \n",vezes);

	return 0;
}
