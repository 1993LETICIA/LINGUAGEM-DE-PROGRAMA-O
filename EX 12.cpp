#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	printf("\n Digite um número: "); 
	scanf("%d",&numero);	
		
	if(numero % 2 == 0 )
	{
		printf("\n");
	 	printf("\n O número %d é par!",numero);
	}
	else
	{
		printf("\n");
		printf("\n O número %d é ímpar!",numero);
	}	

	return 0;
}
