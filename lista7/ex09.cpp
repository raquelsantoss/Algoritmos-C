//Nome: Raquel dos Santos Rezende 
//Matricula: UC21100930
//Curso: Ciência da Computação
#include <stdio.h>

int main()
{
	int idades[100], i = 0, j, k, l, maisVelho = 0, posicao[100];
	
	for (int x = 0; x < 100; x++) posicao[x] = 0;
	int sair = 0;
	do {
		printf("DIGITE UMA IDADE OU UM VALOR NEGATIVO PARA PARAR: ");
		scanf("%d", &idades[i]);

		sair = i >= 100 || idades[i] < 0;
		i++;

	} while (!sair);

	for (j = 0; j < i; j++)
	{
		for (k = 0; k < i - 1; k++)
		{
			if (idades[k] <= idades[k + 1])
			{
				maisVelho = idades[k + 1];		
			}
		}
	}
	printf("mais velho %d\n", maisVelho);

	for (l = 0; l < i; l++)
	{
		if(idades[l] == maisVelho) printf("posicao  %d\n", l);
	}
}
