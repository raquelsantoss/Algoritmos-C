//Nome: Raquel dos Santos Rezende 
//Matricula: UC21100930
//Curso: Ci�ncia da Computa��o
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
 
	            printf("Informe o n�mero de funcion�rios que pertencem a esta empresa: ");
	            fflush(stdin);
	            scanf("%i", &funcionario);
	
	            for(int i = 0; i < funcionario; i++)
	                {
		                
			            printf("Informe a matr�cula do %iº funcionario: ", i+1, matricula[100]);
			             fflush(stdin);
			            scanf("%i", &matricula[i]);

		
		                printf("Informe o sal�rio do %iº funcionario: ", i+1, salario[100]);
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
		printf("Salario do %iº é %i. \n", matricula[i], salario[i]);
	}
	
	printf("menor sal�rio: R$ %i,00. \n", MenorSalario);
	printf("menor sal�rio: R$ %i,00. \n", maiorSalario);

    

return 0;
	
}
