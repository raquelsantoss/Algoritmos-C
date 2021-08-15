
#include <stdio.h> 
#include <stdlib.h>

int main(){ 
char nome[15]; 
int sexo; // ''             
float peso,altura; 	
printf("Qual o seu nome? "); 
scanf("%s", &nome); 
printf(" sexo M ou F? Digite 1 para feminino e 2 para masculino ");
scanf("%d",&sexo);
printf("Quanto voce tem de altura?");
scanf("%f",altura);
	
    if (sexo == 2) { 
        printf("Ola Ilmo. Sr. %s, seja bem-vindo!", nome);
	    peso = (72.5 * altura) - 58;
	}else{
		printf("Ola Ilma. Sra. %s, seja bem-vinda!", nome);
		peso = (62.1 * altura) - 44.7;
	}
	
    printf("\nO seu peso ideal e de %.2fkg", peso); 
    return 0;
}
