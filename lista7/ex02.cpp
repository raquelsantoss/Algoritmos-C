//Nome: Raquel dos Santos Rezende 
//Matricula: UC21100930
//Curso: Ci�ncia da Computa��o
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float reais[50];
	int quantidadeAlunos;
	
	printf("Digite o n�mero de alunos: ");
	scanf("%i", &quantidadeAlunos);
	
	if(quantidadeAlunos > 50 || quantidadeAlunos <= 0){
		printf("Valor inv�lido!");
		return 0;
	} 
	
	for(int i = 0; i < quantidadeAlunos; i++){
		printf("Digite a nota do aluno n�%i: ", i+1);
		scanf("%d", &reais[i]);
		fflush(stdin);		
	}
	
	
}
