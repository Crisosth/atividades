#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *v, int N)
{
	int i, continua, aux, fim = N;
	
	do
	{
		continua = 0;
		
		for(i = 0; i < fim - 1; i++)
		{
			if(v[i] > v[i + 1])
			{
				aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				continua = i;
			}
		}
		fim--;
	} while (continua != 0);
}

int main()
{
	int v[5], i;
	
	for(i = 0; i < 6; i++)
	{
		printf("Digite o valor: ");
		scanf("%d", v[i]);
	}

		bubbleSort(&v[5]);
		printf("%d", v[5]);
	
	return 0;
}