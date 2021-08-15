// Nome: Raquel dos Santos Rezende
// Matricula: UC21100930 
// Curso: Ciência da Computação
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>


int main(){
	
	
	setlocale(LC_ALL,"Portuguese"); 
	

	int criancasTotal=0, contador=1, criancasMortas=0, mortosMasculino=0, prematuros=0, mesesVida;
	char sexoCrianca;
	int porcentagemMortos, porcentagemMortosMasculino, porcentagemPrematuros;
	
	

		
		
		do{
			printf("Quantas crianças  irão ser analisados na pesquisa: ");
			scanf("%d", &criancasTotal);
			if(criancasTotal<=0){
				printf("\nDigite um valor válido!\n\n ");		
			}
		}while(criancasTotal<=0);
		
		printf("\n\nOk, vamos prosseguir....");
		
		
		do{
			
			
			printf("\n\nDigite o sexo da %dª criança [F/M]. (Digite C para prosseguir): ", contador);
			
			do{
				scanf("%c", &sexoCrianca);
			}while(sexoCrianca != 'f' && sexoCrianca != 'F' && sexoCrianca != 'm' && sexoCrianca != 'M' && sexoCrianca != 'c' && sexoCrianca != 'C');
			
			system("cls");
			
			
			do{
				printf("\n\nDigite quantos meses de vida tem a %dª criança: ", contador);
				scanf("%d", &mesesVida);
				if(mesesVida<=0){
					printf("\nDigite um valor válido!");
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
	printf("Total de Crianças: %d\n", criancasTotal);
	printf("Total de Crianças Mortas: %d\n", criancasMortas);
	printf("Taxa de Mortalidade Infantil: %d %%\n", porcentagemMortos);
	printf("Taxa de Meninos Mortos: %d %%\n", porcentagemMortosMasculino);
	printf("Crianças que morreram com menos de 24 meses de vida: %d %%", porcentagemPrematuros);
		
	
 	return 0;

	
}
