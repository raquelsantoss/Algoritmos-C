// Objetivo: a partir da leitura da velocidade e placa do carro, avisar ao motorista se ele será multado

#include <stdio.h>

int main(){ 
int vel; 
char placa[8];
printf(" Em qual velocidade voce estava andando? \n"); 
scanf("%d",&vel); 
printf(" Placa do seu carro: \n");
scanf("%s",&placa);
    if (vel > 80) {
        printf("MULTADO! voce excedeu o limite de 80km/h permitido."); 
    }                                                                   
printf("\n Motorista da placa %s, dirigindo a uma velocidade de %d km/h tenha um bom dia. Dirija com seguranca!",placa,vel);
    return 0;
}                                                           
