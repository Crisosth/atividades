#include <stdio.h>
#include <stdlib.h>

struct dma {
	int dia;
	int mes;
	int ano;
	};
	
	int main()
	{
		struct dma data1, data2;
        int dif;
        
       printf("digite a data mais recente na ordem correspondente dia/mes/ano:\n");
       scanf("%d ", &data1.dia);
       scanf("%d ", &data1.mes);
       scanf("%d ", &data1.ano);
       
       printf("digite a data mais antiga na ordem correspondente dia/mes/ano:\n");
       scanf("%d ", &data2.dia);
       scanf("%d ", &data2.mes);
       scanf("%d ", &data2.ano);
       
       dif = (data1.ano - data2.ano) * 365;
       dif = dif + ((data1.mes - data2.mes) * 30);
       dif = dif + (data1.dia - data2.dia);
       printf("\no numero de dias entre as duas datas e: %d", dif);
       
       return 0;
    }