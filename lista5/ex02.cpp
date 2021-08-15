
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
int main(){
	setlocale(LC_ALL, "Portuguese");
   int a,b,c,maior;
printf("Digite um número inteiro:\n"); 
scanf("%d",&a); 
printf("Digite o segundo número inteiro:\n");
scanf("%d",&b);
printf("Digite o terceiro número inteiro:\n");
scanf("%d",&c);

maior = a; 
    if ((b > a)&&(b > c)) {
        maior = b;
    }if ((c > a)&&(c > b)) {
        maior = c;
    }
    system("cls");
    printf(" O maior numero é: %d \n",maior);
   
}
