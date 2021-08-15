
#include <stdio.h>

int main(){ 
char nome[20];
float valorbasico, valorextra, horas;
printf("Qual o seu nome: \n"); 
scanf("%s",&nome);
printf("Por quantas horas voce acessou a internet? \n");
scanf("%f",&horas);
valorbasico = 30;  
valorextra =  30 +((horas - 20)*3);
    if ( horas <= 20 ) {
        printf(" %s, o valor sera de R$%.2f reais",nome,valorbasico);
    }else{
        printf(" %s, o valor sera de R$%.2f reais",nome,valorextra);
    }
    return 0;
}

