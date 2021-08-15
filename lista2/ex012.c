

    #include <stdio.h>
    #include <string.h>
    int main(){  
    int ddd;
    char cidade[35];
    printf(" Digite o DDD da sua cidade: \n");
    scanf("%d",&ddd);  
		
    switch (ddd){
    
        case 61:
			strcpy(cidade, "Brasilia"); 
		break;
		case 71:
			strcpy(cidade, "Salvador");
		case 11:
			strcpy(cidade, "Sao Paulo");
		break;
		case 21:
			strcpy(cidade, "Rio de Janeiro");
		break;
		case 32:
			strcpy(cidade, "Juiz de Fora");
		break;
		case 19:
			strcpy(cidade, "Campinas");
		break;
		case 27:
			strcpy(cidade, "Vitoria");
		break;
		case 31:
			strcpy(cidade, "Belo Horizonte");
		break;
		default:
			strcpy(cidade, "Sem idenficacao");
    }

    printf("Cidade: %s", cidade);
    return 0;
}

