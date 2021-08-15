
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
int main(){
	setlocale(LC_ALL, "Portuguese");
    int num [3];
    int i,j,y;

    for(i = 0; i < 3; i++)
    {
          printf("\nDigite o %dº número: ", i + 1);
          scanf ("%d",&num[i]);
    }
     printf("\n\Números na ordem crescente:\n\n");

    for (i = 0; i < 3; i++)
    {
       for (j = i + 1 ; j < 3; j++)
       {         
          if(num[i] > num[j])
          {
             y = num[i];
             num[i] = num[j];
             num[j] = y;
          }
      }
    }
    for(i = 0; i < 3 ; i++)
    {
        printf("%d ",num[i]);
        printf ("\n\n");
    }
    system ("pause");
    return 0;
}
