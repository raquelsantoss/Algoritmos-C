//Nome: Raquel dos Santos Rezende 
//Matricula: UC21100930
//Curso: Ci�ncia da Computa��o
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float reais[30];
	
	for(int i = 0; i < 30; i++){
		printf("Digite a nota do aluno n�%i: ", i+1);
		scanf("%d", &reais[i]);
		fflush(stdin);
	}
}
