//Nome: Raquel dos Santos Rezende 
//Matricula: UC21100930
//Curso: Ciência da Computação
#include<stdio.h>

int main(){

	int informado, nota[11]={0,0,0,0,0,0,0,0,0,0,0}, ciclo = 0, opcao, contador;
	
	for(contador=0;contador<80;contador++){
	
	printf("digite uma nota: ");
	scanf("%i",&informado);
	
	switch(informado){
		case 0: nota[0]++;
		break;
		case 1: nota[1]++;
		break;
		case 2: nota[2]++;
		break;
		case 3: nota[3]++;
		break;
		case 4: nota[4]++;
		break;
		case 5: nota[5]++;
		break;
		case 6: nota[6]++;
		break;
		case 7: nota[7]++;
		break;
		case 8: nota[8]++;
		break;
		case 9: nota[9]++;
		break;
		case 10: nota[10]++;
		break;
		default: printf("invalido");
	}
	ciclo++;
	printf("digite 0 se deseja finalizar: ");
	scanf("%i",&opcao);
	if(opcao==1)contador=81;
}
	for(contador=0;contador<11;contador++){
	
	printf("a frequencia da nota %i contador e %i\n",contador,nota[contador]);}

	return 0;
}
