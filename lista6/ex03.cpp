// Nome: Raquel dos Santos Rezende
// Matricula: UC21100930 
// Curso: Ci�ncia da Computa��o

#include<stdio.h> 
#include<ctype.h> 
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese"); 

int maior, menor,contador=1,altura[4], alturaMulheres, media, mulheres=0, homens=0;
char sexo[10];
	
	for(contador=1;contador<=10;contador++){
		printf("\nInforme a altura da %d� pessoa em cm: ", contador);
		scanf("%d",&altura[contador]);
		fflush(stdin);
		
		printf("\nInforme o sexo da %d� pessoa [F|M]: ", contador);
		scanf("%c",&sexo[contador]);
		fflush(stdin);
			sexo[contador] = toupper(sexo[contador]);
			
			if(altura[contador]<30){
				printf("\nAltura inv�lida! Por favor, informar a altura em cent�metros: ");
				scanf("%d", &altura[contador]);
				fflush(stdin);}
		if(contador==1){
				menor = altura[contador];
				maior = altura[contador];
			}else{
				if(menor > altura[contador])
					menor = altura[contador];
				if(maior < altura[contador])
					maior = altura[contador];
				if(sexo[contador] == 'F'){
					alturaMulheres = alturaMulheres+ altura[contador];
					mulheres++;}
					else
					homens++;};};
	
	media = alturaMulheres/mulheres;
	
	printf("\nA Menor Altura � %d\n",menor);
	printf("\nA Maior Altura � %d\n",maior);
	printf("\nA M�dia de altura das mulheres � %d\n",media);
	printf("\nA quantidade de homens � %d\n",homens);
	
return 0;

}

