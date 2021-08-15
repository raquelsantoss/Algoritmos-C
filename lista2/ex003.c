

#include <stdio.h> 
int main(){
int a,b,c, soma1,soma2,soma3; 
printf("Digite o valor do primeiro segmento:"); 
scanf("%d",&a); 
printf("Digite o valor do segundo segmento:");
scanf("%d",&b);
printf("Digite o valor do terceiro segmento:");
scanf("%d",&c);
soma1 = b + c; 
soma2 = a + c;
soma3 = a + b;
    if( (a <=soma1)&&(b <=soma2)&&(c <=soma3) ){ 
        printf("Esses segmentos formam um triangulo!");
    }else{ 
        printf("Esses segmentos NAO formam um triangulo!");
    }
    return 0;
}
