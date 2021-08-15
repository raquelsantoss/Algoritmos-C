
#include <stdio.h>
#include <stdlib.h>

int main(){ 
char nome[15]; 
int sexo; // ''	
printf("Qual o seu nome? "); 
scanf("%s", &nome); 
printf(" sexo M ou F? Digite 1 para feminino e 2 para masculino ");
scanf("%d",&sexo);

	if (sexo == 2) { 
		printf("Ola Ilmo. Sr. %s, seja bem-vindo!", nome);
		
	}else{
		printf("Ola Ilma. Sra. %s, seja bem-vinda!", nome);
		
	}
	return 0;
	
	
}
