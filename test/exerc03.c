#include <stdio.h>
#include <stdlib.h>
int main()
{
	//atribuição de variaveis
	int n, G;
	//entrada de dados
	printf("digite um numero inteiro positivo e que seja par: ");
	scanf("%d", &n);
	
	//estrutura de decisão
	if (n <= -1, n%2 == 1)
	{
       printf("valor invalido");
	}
	else
	{
		//laço de repetição
       for(G = 0; G <= n; n = n-2)
	   {
	   //saída de dados
	   printf("%d\n", n);
	   }
	}
	
	return 0;
	}