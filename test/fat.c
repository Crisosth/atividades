#include <stdio.h>
#include <stdlib.h>
int main()
{
//definicao de variaveis
int fat, n = 1, n2 = 0;
  //laço de repeticao
  for(fat = 1; n <= 10 ; n = n + 1)
  {
  	fat = fat * n;
     printf("\nO valor do fatorial de %d! e: %d\n", n2++, fat);	
  }
     
	system("PAUSE");
}