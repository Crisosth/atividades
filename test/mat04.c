#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 5

int main()
{
	int i, j, aux = 0;
	int **p;
	p = (int **)malloc(LIN * sizeof(int));
	
	for(i = 0; i < LIN; i++)
	{
		p[i] = (int *)malloc(COL * sizeof(int));
	}
	if(p == NULL)
	{
		printf("Memoria insuficiente\n");
	}
	else
	{
		for(i = 0; i< LIN; i++)
		{
			for(j = 0; j < COL; j++)
			{
				p[i][j] = aux;
				aux = aux + 2;
			}
		}
	    for(i = 0; i < LIN; i++)
		{
			for(j = 0; j < COL; j++)
			{
				printf("%3d", p[i][j]);
			}
			printf("\n");
		}
		for(i = 0; i < LIN; i++)
		{
			free(p[i]);
		}
			free(p);
	}   
	
	return 0;
	}
