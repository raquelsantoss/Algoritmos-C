//Nome: Raquel dos Santos Rezende 
//Matricula: UC21100930
//Curso: Ci�ncia da Computa��o
#include<stdio.h>

int main(){

	int contador=0;
	char letra[30];
	
	for(contador=0;contador<30;contador++){
	printf("digite uma letra: ");
	setbuf(stdin,0);
	scanf("%c",&letra[contador]);}
	
	for(contador=29;contador>=0;contador--){
	printf("%c \n",letra[contador]);}
	
	return 0;
}
