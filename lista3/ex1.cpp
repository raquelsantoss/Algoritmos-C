
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numFat, contador, resultadoFat = 1;
	
	printf("Informe o n�mero que deseja para  calcular o fatorial: ");
	scanf("%d", &numFat);
	
	if(numFat> 0){
		for(contador = numFat; contador > 0; contador--){
			resultadoFat *= contador;
		}
	}
	
	printf("O valor do fatorial %d! � de %d", numFat, resultadoFat);
	
	return 0;
}
