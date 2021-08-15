
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int numerosLidos = 0, numeroAtual = 0;
	
	for(int i = 1; i <= 100; i++) {
		printf("Digite o %d� n�mero: ", i);
        scanf("%d", &numeroAtual);
        fflush(stdin);
        if(numeroAtual < 0){
        	break;
        }else{
        	numerosLidos++;
		}
	}
	
	system("cls");
	
	printf("\n\nA quantidade total de n�meros lidos foram: %d\n\n", numerosLidos);

	return 0;
}
