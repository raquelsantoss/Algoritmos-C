
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numA, numB, contador, resultado = 0;
	bool temSinal;
	
	printf("Informe os números que deseja multiplicar: \n");
	scanf("%d%d", &numA, &numB);
	
	
	if(numA < 0) {
		numA *= -1;
		
		temSinal = true;
	}
	
	if(numB < 0) {
		numB *= -1;
		
		if(temSinal) temSinal = false;	
	}

	if(numA >= numB){
		for(contador = 0; contador < numB; contador++){
			resultado += numA;
		}		
	}else{
		for(contador = 0; contador < numA; contador++){
			resultado += numB;
		}
	}
	
	if(temSinal){
		resultado *= -1;
	}
	
	printf("O resultado da multiplicação entre %d e %d é %d", numA, numB, resultado);

	return 0;
}
