//Nome: Raquel dos Santos Rezende 
//Matricula: UC21100930
//Curso: Ciência da Computação
#include<stdio.h>

int main(){

	int contador = -1, contador2, letra[1000], nome;
	
	do{
		contador++;
		printf("digite a letra %i: ",contador);
		fflush(stdin);
		scanf("%c",&letra[contador]);
		
		if(letra[contador]=='#'){
	     contador-1;
	for(contador2=0;contador2<contador;contador2++){
		printf("%c",letra[contador2]);
	}
	printf("\n");
	return 0;
	 }

	}while(0!=1);

	return 0;
}
