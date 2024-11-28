#include <stdio.h>
#include <stdlib.h>
int main()
{
	//atribuição de variaveis
	float base, altura, area;
	//entrada de dados
	printf("digite o valor da base do triangulo: ");
	scanf("%f", &base);
	printf("digite o valor da altura do triangulo: ");
	scanf("%f", &altura);
	//estrutura de decisão
	if (base > 0, altura > 0)
	{
       //calculo
	   area = (base * altura)/2;
	   //saída de dados
	   printf("o valor da area do triangulo e: %.2f\n", area);
	}
	else{
		printf("valor invalido\n");
	}
	system("PAUSE");
	}