
#include <stdio.h> 
int main (){
    struct p {
        char nome[30]; 
        float altura; 
    };
    p nome1, nome2, nome3, menor;
    printf(" Nome do primeiro usuario:"); 
    scanf("%s",&nome1.nome); 
    printf("Altura:");
    scanf("%f",&nome1.altura);

    printf(" Nome do segundo usuario:");
    scanf("%s",&nome2.nome);
    printf("Altura:");
    scanf("%f",&nome2.altura);

    printf(" Nome do terceiro usuario:");
    scanf("%s",&nome3.nome);
    printf("Altura:");
    scanf("%f",&nome3.altura);

    if ((nome2.altura < nome1.altura)&&(nome2.altura < nome3.altura)){  
        menor = nome2;
    }if ((nome3.altura < nome1.altura)&&(nome3.altura < nome2.altura)){
        menor = nome3;
	}else{
        menor = nome1;
	}
    printf("A menor pessoa se chama %s e tem %.2f de altura", menor.nome, menor.altura);
    return 0;
}
