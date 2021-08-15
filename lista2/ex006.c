

#include <stdio.h> 
int main() {  
int n, resultado; 
printf("Digite um numero inteiro:\n "); 
scanf("%d", &n); 
resultado = n % 2; 
  
    if (resultado == 0) { 
        printf("numero par");
    }else{ 
        printf("numero impar");
    }
    return 0;
}
