
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int opcao, quantidadeAbacaxi = 0, quantidadeMaca = 0, quantidadePera = 0, quantidadeScanf = 0;
	
	printf("\nOl�, seja bem-vindo � Feira da Ceil�ndia !\n");
	while(opcao != 4){
		printf("\n[1] Abacaxi \n[2] Ma�� \n[3] Pera \n[4] Finalizar pedido");
		printf("\n\nSelecione qual fruta voc� deseja colocar no carrinho: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("\nQuantos abacaxis voc� deseja comprar? ");
				scanf("%d", &quantidadeScanf);
				quantidadeAbacaxi += quantidadeScanf;	
			break;
			case 2:
				printf("\nQuantos ma��s voc� deseja comprar? ");
				scanf("%d", &quantidadeScanf);
				quantidadeMaca += quantidadeScanf;
			break;
			case 3:
				printf("\nQuantos peras voc� deseja comprar? ");
				scanf("%d", &quantidadeScanf);
				quantidadePera += quantidadeScanf;	
			break;
			case 4:
				printf("\nPedido finalizado! \n");
				printf("Voc� comprou %d abacaxis, %d ma��s e %d peras", quantidadeAbacaxi, quantidadeMaca, quantidadePera);
			break;
			default:
				printf("\nOp��o n�o cadastrada, selecione uma dispon�vel!\n");
		}
	}
	return 0;
}
