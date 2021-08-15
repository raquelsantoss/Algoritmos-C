#include <stdio.h> 
#include <string.h> 
int main(){ 
int a,b,c, soma1,soma2,soma3; 
printf("Digite o valor do primeiro segmento: \n"); 
scanf("%d",&a); 
printf("Digite o valor do segundo segmento: \n");
scanf("%d",&b);
printf("Digite o valor do terceiro segmento: \n");
scanf("%d",&c);
soma1 = b + c; 
soma2 = a + c;
soma3 = a + b;
if( (a <=soma1)&&(b <=soma2)&&(c <=soma3) ){ 
    printf("Esses segmentos formam um triangulo!");
if ((a == b)&&(b == c)){  
            printf("\n Triangulo Equilatero! \n  ");
        }
        else if ((a != b)&&(a != c)&&(b != c)){
            printf("\n Triangulo Escaleno! \n  "); 
        }
        else{
            printf("\n Triangulo Isoceles! ");       
        }
        
}else{
    printf("Esses segmentos Nao formam um triangulo");
        
        
    }
    return (0);
}
