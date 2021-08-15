
#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
int funcionario, matricula[100], maiorSalario=0, MenorSalario=0, salario[100];	

    setlocale(LC_ALL, "Portuguese");	
 
	            printf("Informe o número de funcionários que pertencem a esta empresa: ");
	            fflush(stdin);
	            scanf("%i", &funcionario);
	
	            for(int i = 0; i < funcionario; i++)
	                {
		                
			            printf("Informe a matrícula do %iÂº funcionario: ", i+1, matricula[100]);
			             fflush(stdin);
			            scanf("%i", &matricula[i]);

		
		                printf("Informe o salário do %iÂº funcionario: ", i+1, salario[100]);
		                fflush(stdin);
		                scanf("%i", &salario[i]);
		                  
		            if (i == 1)
			            MenorSalario = salario[i];
			                
			        else if (MenorSalario > salario[i])
				        MenorSalario = salario[i];
				            
		            if(maiorSalario < salario[i])
			            maiorSalario = salario[i];	
				}
	
	system("cls");
	
	for(int i = 1; i <= funcionario; i++){
		printf("Salario do %iÂº Ã© %i. \n", matricula[i], salario[i]);
	}
	
	printf("menor salário: R$ %i,00. \n", MenorSalario);
	printf("menor salário: R$ %i,00. \n", maiorSalario);

    

return 0;
	
}
