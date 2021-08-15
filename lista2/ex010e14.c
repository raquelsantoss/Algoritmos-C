

#include <stdio.h>
int main() { 
int a,b,c,menor,maior;
printf("Digite um numero inteiro:\n"); 
scanf("%d",&a);
printf("Digite o segundo numero inteiro:\n");
scanf("%d",&b);
printf("Digite o terceiro numero inteiro:\n");
scanf("%d",&c);
menor = a;  
    if ((b < a)&&(b < c)){
        menor = b;
    }if ((c < a)&&(c < b)){
        menor = c;
    }
maior = a; 
    if ((b > a)&&(b > c)) {
        maior = b;
    }if ((c > a)&&(c > b)) {
        maior = c;
    }
    printf(" O maior numero: %d \n",maior);
    printf(" O menor numero: %d  \n", menor);
}

