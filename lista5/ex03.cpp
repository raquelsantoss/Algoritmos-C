
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
 char c;
 int a;
 char b[10];
	
	printf("Digite um caractere qualquer ou um valor inteiro:\n");
	scanf("%d",&a);
	scanf("%c",&c);
	
	itoa(a,b,2);
	
	
	printf("\n\n%d em octal: %o\n",a,a);
	printf("%d em binário: %s\n",a,b);
	printf("%d em hexadecimal: %x\n",a,a);

	

    if (isalpha(c) == 0)
         printf("%c não é uma string.", c);
    else
         printf("%c é uma string.", c);

    
	return 0;
    
    
}
