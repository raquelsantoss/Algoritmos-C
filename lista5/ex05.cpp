
#include <stdio.h>
#include <locale.h> 
#include <ctype.h>
#include<stdlib.h> 

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	
	do { 
		printf("Insira a inicial do seu sexo m|f: ");
		scanf("%c", &sexo);
		system("cls");
	} while (tolower(sexo) != 'f' && tolower(sexo) != 'm');

	printf("Esse sexo por extenso �: %s", tolower(sexo) == 'm' ? "Masculino" : "Feminino");
}
