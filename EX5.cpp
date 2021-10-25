#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int numero,quadrado;
	double raiz;
	
	printf(" Digite um número: ");
	scanf("%d",&numero);
	
	if (numero>0)
	{
		quadrado=numero*numero;
		raiz=sqrt(numero);
		
		printf("\n");
		printf(" O quadrado do número %d é %d, e sua raiz quadrada é de %.0f. \n",numero,quadrado,raiz);
		
	} 
	else
	{
		printf("\n");
		printf(" O número %d não é um número positivo! \n",numero);
	} 
	
	return 0;	
} 
