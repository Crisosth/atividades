#include <stdio.h>
#include <stdlib.h>
int main()
{
	//atribui��o de variaveis
	int n, G;
	//entrada de dados
	printf("digite um numero inteiro positivo e que seja par: ");
	scanf("%d", &n);
	
	//estrutura de decis�o
	if (n <= -1, n%2 == 1)
	{
       printf("valor invalido");
	}
	else
	{
		//la�o de repeti��o
       for(G = 0; G <= n; n = n-2)
	   {
	   //sa�da de dados
	   printf("%d\n", n);
	   }
	}
	
	return 0;
	}