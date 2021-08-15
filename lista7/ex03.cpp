
#include <stdio.h>


int main()
{
    int data[100], total = 0;

	for (int i = 1; i < 5; i++)
	{
		printf("Digite o %d numero:\n",i);
		scanf("%d", &data[i]);
		
}
	for (int i = 1; i < 5; i++)
	{
		total += data[i];
	}

	printf("O total dos numeros: %d", total);


    return 0;
}
