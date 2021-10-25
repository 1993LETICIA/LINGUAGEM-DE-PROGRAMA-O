
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 #include<locale.h>
 
int main()
{
setlocale(LC_ALL, "Portuguese");
float VPercDistribuidor=25;
float VPercImpostos=42;
float VCustoFabrica,ValorImposto, VCustoConsumidor, ValorDistribuidor ;
 
	printf("\n Informe o valor de custo de fábrica: ");
	scanf("%f", &VCustoFabrica);
 
	ValorDistribuidor = VCustoFabrica + (VCustoFabrica * VPercDistribuidor / 100);
 
	ValorImposto = VCustoFabrica + (VCustoFabrica * VPercImpostos / 100);
 
	VCustoConsumidor = ValorDistribuidor + ValorImposto;
 
	printf("\n O custo ao consumidor é: R$%.2f", (VCustoConsumidor));
 
	printf("\n\n");
return 0;
}
