#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	//atribui��o de variaveis
	int n, quad;
	float rq;
	//entrada de dados
	printf("digite um numero inteiro: ");
	scanf("%d", &n);
	
	//estrutura de decis�o
	if (n%2 == 0)
	{
       //calculo
	   quad = n * n;
	   rq = sqrt(n);
	   //sa�da de dados
	   printf("o quadrado do numero e: %d\n", quad);
	   printf("A raiz quadrada do numero e: %.2f\n", rq);
	}
	system("PAUSE");
	}