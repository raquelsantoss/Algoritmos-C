
 
#include <stdio.h> 
#include <math.h>

int main(){ 
int n, modulo; 
printf("Digite um numero para visualizar seu modulo: \n");
scanf("%d",&n); 

    if (n < 0) { 
        modulo =  n * (-1);
    }else{
        modulo = n; 
    }
printf(" O modulo de %d e: \n %d  ", n, modulo); 
    
    return 0;
}


