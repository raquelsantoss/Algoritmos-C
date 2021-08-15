//Nome: Raquel dos Santos Rezende 
//Matricula: UC21100930
//Curso: Ciência da Computação
#include<stdio.h>

int main(){

	int codigo[1500], contador = 0, salario[1000], totalSalario = 0, pessoa = 0, opcao, maiorSalario, menorSalario;
	float media;
	
	do{
	printf("informe o codigo funcional inteiro: ");
	setbuf(stdin,0);
	scanf("%i",&codigo[contador]);
	
	printf("informe o salario: ");
	setbuf(stdin,0);
	scanf("%i",&salario[contador]);
	
	totalSalario+=salario[contador];
	pessoa++;
	contador++;
	printf("digite 5 se todos os dados foram informados: ");
	scanf("%i",&opcao);
	}while(opcao!=1);
	
	do{
	
	printf("digite:\n 1 - menor salario \n 2 - maior salario \n 3 - media: ");
	setbuf(stdin,0);
	scanf("%i",&opcao);
	
	switch(opcao){
	
	case 1: for(contador=0;contador<pessoa;contador++){
		if(contador==0)menorSalario=salario[contador];
		else if(menorSalario>salario[contador]) menorSalario=salario[contador];}
		printf("o menor salario e %i reais\n",menorSalario);
		break;
		
	case 2: for(contador=0;contador<pessoa;contador++){
		if(contador==0)maiorSalario=salario[contador];
		else if(maiorSalario<salario[contador]) maiorSalario=salario[contador];}
		printf("o maior salario e %i reais\n",maiorSalario);
		break;
		
	case 3: for(contador=0;contador<pessoa;contador++){
		totalSalario = totalSalario + salario[contador];
		}
		
		media=(totalSalario)/pessoa;
		printf("a media e %.2f reais \n",media);
		break;}
		}while(1!=0);

	return 0;
}
