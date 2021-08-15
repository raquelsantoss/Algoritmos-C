
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
	printf("%d em bin�rio: %s\n",a,b);
	printf("%d em hexadecimal: %x\n",a,a);

	

    if (isalpha(c) == 0)
         printf("%c n�o � uma string.", c);
    else
         printf("%c � uma string.", c);

    
	return 0;
    
    
}
