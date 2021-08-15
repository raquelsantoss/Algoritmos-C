
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia = 0, mes = 0, ano = 0;
	
	do {
		printf("Informe o dia: ");
		scanf("%d", &dia);
	} while(dia < 1 || dia > 31);

	do {
		printf("Informe o m�s: ");
		scanf("%d", &mes);
	} while(mes < 1 || mes > 12);
	
	do {
		printf("Informe o ano: ");
		scanf("%d", &ano);
	} while(dia < 1 || dia > 31);
	
	if((mes == 2) && (dia > 29) ){
		printf("O dia %d � inv�lido para o m�s %d", dia, mes);
	}else if((mes != 2) && !((dia == 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))){
		printf("O dia %d � inv�lido para o m�s %d", dia, mes);
	}else if(!((mes == 2) && (dia == 29) && (ano % 4 == 0))){
		printf("%d n�o � um ano bissexto, portanto, n�o h� o 29� dia.", ano);
	}else{
		printf("A data %d/%d/%d � v�lida", dia, mes, ano);
	}
	
	
	return 0;
}
