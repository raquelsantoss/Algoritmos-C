
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float alturaAnalise, menorAltura;
	int mesmaAltura, contador = 1;

	while(contador <= 10){
		printf("Informe a altura da %dº pessoa: ", contador);
		scanf("%f", &alturaAnalise);
		
		if(alturaAnalise == menorAltura) {
			mesmaAltura++;
		}else if((alturaAnalise < menorAltura) || (menorAltura == 0)){
			menorAltura = alturaAnalise;
		}
		
		contador++;
	}
	
	printf("%d pessoas possuem a MENOR altura de %.2fm", mesmaAltura, menorAltura);
	
	return 0;
}
