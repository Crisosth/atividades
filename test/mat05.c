#include <stdio.h>
#include <stdlib.h>
int main()
{
int	i, j, c = 0, COL, LIN;
int **a;
printf("Digite o numero de linhas: ");
scanf("%d", &LIN);
printf("\nDigite o numero de colunas: ");
scanf("%d", &COL);

a = (int **)malloc(LIN * sizeof(int));

for(i = 0; i < LIN; i++)
{
	a[i] = (int *)malloc(COL * sizeof(int));
}
if(a == NULL)
{
	printf("memoria insuficiente");
}
else{
	for(i = 0; i < LIN; i++)
	{
		for(j = 0; j < COL; j++)
		{
			printf("Elemento [%d] [%d] =  ", i, j);
			scanf("%d", &a[i][j]);
			
        if(i == j)
	{
	   c = c + a[i][j];	
	}
	printf("\n");
		}
	}
		printf("\n*** Mariz gerada ***\n");
	for(i = 0; i < LIN; i++)
	{
		for(j = 0; j < COL; j++)
		{
			printf("%3d ", a[i][j]);
		}
		printf("\n");
		
	}
	
}
	printf("\nA soma da diagonal principal e: %d", c);
	
	for(i = 0; i < LIN; i++)
	{
		free(a[i]);
	}
	free(a);
	
	return 0;
}