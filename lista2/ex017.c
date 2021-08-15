
#include <stdio.h>

int main() {
int nasc,ano,dias,idade,vida;
char nome[30];
printf("Qual o seu nome? \n");
scanf("%s",&nome);
printf("Em que ano voce nasceu? \n");
scanf("%d",&nasc);
printf("Em que ano estamos? \n");
scanf("%d",&ano);
idade = ano - nasc;
vida = idade * 365;
printf(" %s, voce tem %d anos e ja viveu %d dias!", nome,idade,vida);
return 0;
}




