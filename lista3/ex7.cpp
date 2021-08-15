
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int opcao, quantidadeAbacaxi = 0, quantidadeMaca = 0, quantidadePera = 0, quantidadeScanf = 0;
	
	printf("\nOlá, seja bem-vindo à Feira da Ceilândia !\n");
	while(opcao != 4){
		printf("\n[1] Abacaxi \n[2] Maçã \n[3] Pera \n[4] Finalizar pedido");
		printf("\n\nSelecione qual fruta você deseja colocar no carrinho: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("\nQuantos abacaxis você deseja comprar? ");
				scanf("%d", &quantidadeScanf);
				quantidadeAbacaxi += quantidadeScanf;	
			break;
			case 2:
				printf("\nQuantos maçãs você deseja comprar? ");
				scanf("%d", &quantidadeScanf);
				quantidadeMaca += quantidadeScanf;
			break;
			case 3:
				printf("\nQuantos peras você deseja comprar? ");
				scanf("%d", &quantidadeScanf);
				quantidadePera += quantidadeScanf;	
			break;
			case 4:
				printf("\nPedido finalizado! \n");
				printf("Você comprou %d abacaxis, %d maçãs e %d peras", quantidadeAbacaxi, quantidadeMaca, quantidadePera);
			break;
			default:
				printf("\nOpção não cadastrada, selecione uma disponível!\n");
		}
	}
	return 0;
}
