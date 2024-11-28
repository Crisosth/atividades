#include <stdio.h>
#include <stdlib.h>
struct Fila
{
	int capacidade;
	float *dados;
	int primeiro;
	int ultimo;
	int nItens;
};

void criarFila(struct Fila *f, int c)
{
	f -> capacidade = c;
	f -> dados = (float *)malloc(f -> capacidade * sizeof(float));
	f -> primeiro = 0;
	f -> ultimo = -1;
	f -> nItens = 0;
}

void inserir(struct Fila *f, int v)
{
	if(f -> ultimo == f -> capacidade - 1)
	{
		f -> ultimo = -1;
	}
	f -> ultimo++;
	f -> dados[f->ultimo] = v;
	f -> nItens++;
}

int remover(struct Fila *f)
{
f -> primeiro++;
if(f -> primeiro == f -> capacidade)	
{
	f -> primeiro = 0;
}
f -> nItens--;
return 1;
}

int estaVazia(struct Fila *f)
{
	return (f -> nItens);
}

int estaCheia(struct Fila *f)
{
	return(f -> nItens == f -> capacidade);
}

void mostrarFila(struct Fila *f)
{
	int cont, i;
	i = f -> primeiro;
	
	for(cont = 0; cont < f -> nItens; cont++)
	{
		printf("%.2f\n", f -> dados[i++]);
		if(i == f -> capacidade)
		{
			i = 0;
		}
	}
	printf("\n\n");
}

void liberarFila (struct Fila *f)
{
	free(f -> dados);
}

int primeiroElemento(struct Fila *f)
{
	printf("\n primeiro elemento da fila: %.2f", f -> dados[f -> primeiro]);
	printf("\n\n");
}

int ultimoElemento(struct Fila *f)
{
	printf("\n ultimo elemento da fila: %.2f", f -> dados[f -> ultimo]);
	printf("\n\n");
}
int tamanhoFila(struct Fila *f)
{
	printf("\n elementos da fila: %d", f -> capacidade);
	printf("\n\n");
}
int main()
{
	int opcao, capa, ret;
	float valor;
	struct Fila umaFila;
	
	printf("\n Qual a capacidade da fila? ");
	scanf("%d", &capa);
	criarFila(&umaFila, capa);
	
	while (1)
	{
		printf("\n1 - Inserir elemento\n2 - Remover elemento\n3 - Mostrar fila\n4 - mostrar primeiro da fila\n5 - mostrar ultimo da fila\n6 - mostrar quantidade na fila\n0 - sair\n\nOpcao: ");
		scanf("%d", &opcao);
		
		switch(opcao)
		{
			case 0:
				liberarFila(&umaFila);
				return (0);
				
            case 1:
            	if(estaCheia(&umaFila))
				{
					printf("\nFila cheia!\n\n");
				}
				else
				{
				  printf("\nEntre com o valor a ser inserido: ");
				  scanf("%f", &valor);
				  inserir(&umaFila, valor);
				}
				break;
			
			case 2:
				ret = estaVazia(&umaFila);
				if(ret == 0)
				{
					printf("\nFila vazia!\n\n");
				}
				else
				{
					ret = remover(&umaFila);
					if(ret == 1)
						printf("valor removido com sucesso\n\n");
				}
				break;
			
			 case 3:
			 	ret = estaVazia(&umaFila);
				if(ret == 0)
				{
					printf("\nFila vazia!\n\n");
				}
				else
				{
						printf("\nConteudo da fila: \n");
						mostrarFila(&umaFila);
				}
				break;
			 
			case 4:
				ret = estaVazia(&umaFila);
				if(ret == 0)
				{
					printf("\nFila vazia!\n\n");
				}
				else
				{
						primeiroElemento(&umaFila);
				}
				break;
			
			case 5: 
				ret = estaVazia(&umaFila);
				if(ret == 0)
				{
					printf("\nFila vazia!\n\n");
				}
				else
				{
						ultimoElemento(&umaFila);
				}
				break;
			
			case 6:
				ret = estaVazia(&umaFila);
				if(ret == 0)
				{
					printf("\nFila vazia!\n\n");
				}
				else
				{
						tamanhoFila(&umaFila);
				}
				break;
			default:
				printf("\nOpcao invalida\n");
		}
	}
	return 0;
}