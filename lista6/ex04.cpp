// Nome: Raquel dos Santos Rezende
// Matricula: UC21100930 
// Curso: Ci�ncia da Computa��o
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


int main(){
	
	
	setlocale(LC_ALL,"Portuguese"); 
	

	int criancasTotal=0, contador=1, criancasMortas=0, mortosMasculino=0, prematuros=0, mesesVida;
	char sexoCrianca;
	int porcentagemMortos, porcentagemMortosMasculino, porcentagemPrematuros;
	
	

		
		
		do{
			printf("Quantas crian�as  ir�o ser analisados na pesquisa: ");
			scanf("%d", &criancasTotal);
			if(criancasTotal<=0){
				printf("\nDigite um valor v�lido!\n\n ");		
			}
		}while(criancasTotal<=0);
		
		printf("\n\nOk, vamos prosseguir....");
		
		
		do{
			
			
			printf("\n\nDigite o sexo da %d� crian�a [F/M]. (Digite C para prosseguir): ", contador);
			
			do{
				scanf("%c", &sexoCrianca);
			}while(sexoCrianca != 'f' && sexoCrianca != 'F' && sexoCrianca != 'm' && sexoCrianca != 'M' && sexoCrianca != 'c' && sexoCrianca != 'C');
			
			system("cls");
			
			
			do{
				printf("\n\nDigite quantos meses de vida tem a %d� crian�a: ", contador);
				scanf("%d", &mesesVida);
				if(mesesVida<=0){
					printf("\nDigite um valor v�lido!");
				}
			}while(mesesVida<=0);
			
			system("cls");
			
			
			if(sexoCrianca=='m'||sexoCrianca=='M'){
				mortosMasculino++;
			}
			
			
			if(mesesVida<=24){
				prematuros++;
			}
			
			
			criancasMortas++;
			contador++;
		
		}while(sexoCrianca != 'c' && sexoCrianca != 'C');
		
	system("cls");
		
			
	criancasMortas = criancasMortas-1;
	prematuros = prematuros-1;
	porcentagemMortos = criancasMortas*100 / criancasTotal;
	porcentagemMortosMasculino =  mortosMasculino*100/ criancasTotal;
	porcentagemPrematuros =  prematuros*100 / criancasTotal;
		
	
	printf("Resultados da Pesquisa:\n\n");
	printf("Total de Crian�as: %d\n", criancasTotal);
	printf("Total de Crian�as Mortas: %d\n", criancasMortas);
	printf("Taxa de Mortalidade Infantil: %d %%\n", porcentagemMortos);
	printf("Taxa de Meninos Mortos: %d %%\n", porcentagemMortosMasculino);
	printf("Crian�as que morreram com menos de 24 meses de vida: %d %%", porcentagemPrematuros);
		
	
 	return 0;

	
}
