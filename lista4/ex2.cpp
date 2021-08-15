
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia, mes;
	
	do {
		printf("Informe o dia: ");
		scanf("%d", &dia);
	} while(dia < 1 || dia > 31);

	do {
		printf("Informe o m�s: ");
		scanf("%d", &mes);
	} while(mes < 1 || mes > 12);
	
	if((mes == 2) && (dia > 29) ){
		printf("O dia %d � inv�lido para o m�s %d", dia, mes);
	}else if((mes != 2) && !((dia == 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))){
		printf("O dia %d � inv�lido para o m�s %d", dia, mes);
	}else{
		if( ((dia >= 21) && (mes == 3)) || ((dia <= 20) && (mes == 4)) ){
			printf("signo: �ries");
		}else if( ((dia >= 21) && (mes == 4)) || ((dia <= 20) && (mes == 5)) ){
			printf("signo: Touro");
		}else if( ((dia >= 21) && (mes == 5)) || ((dia <= 20) && (mes == 6)) ){
			printf("signo: G�meos");
		}else if( ((dia >= 21) && (mes == 6)) || ((dia <= 22) && (mes == 7)) ){
			printf("signo: C�ncer");
		}else if( ((dia >= 23) && (mes == 7)) || ((dia <= 22) && (mes == 8)) ){
			printf("signo: Le�o");
		}else if( ((dia >= 23) && (mes == 8)) || ((dia <= 22) && (mes == 9)) ){
			printf("signo: Virgem");
		}else if( ((dia >= 23) && (mes == 9)) || ((dia <= 22) && (mes == 10)) ){
			printf("signo: Libra");
		}else if( ((dia >= 23) && (mes == 10)) || ((dia <= 21) && (mes == 11)) ){
			printf("signo: Escorpi�o");
		}else if( ((dia >= 22) && (mes == 11)) || ((dia <= 21) && (mes == 12)) ){
			printf("signo: Sagit�rio");
		}else if( ((dia >= 22) && (mes == 12)) || ((dia <= 20) && (mes == 1)) ){
			printf("signo: Capric�rnio");
		}else if( ((dia >= 21) && (mes == 1)) || ((dia <= 18) && (mes == 2)) ){
			printf("signo: Aqu�rio");
		}else if( ((dia >= 19) && (mes == 2)) || ((dia <= 20) && (mes == 3)) ){
			printf("signo: Peixes");
		}else{
			printf("O dia %d � inv�lido para o m�s %d", dia, mes);
		}
	}

	return 0;
}
