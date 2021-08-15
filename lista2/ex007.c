

#include <stdio.h> 

int main(){ 
float n1, n2, diferenca; 
printf("Digite o primeiro valor numerico: \n");
scanf("%f",&n1);
printf("Digite o segundo valor numerico: \n");
scanf("%f", &n2);
   
	if(n1 >= n2){ 
		diferenca = n1 - n2;
	}else{
		diferenca = n2 - n1;
	}
	
printf("A diferenca entre os numeros %.1f e %.1f e de %.1f", n1, n2, diferenca);
return 0;
}    
        




