#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	printf("\n Digite um n�mero: "); 
	scanf("%d",&numero);	
		
	if(numero % 2 == 0 )
	{
		printf("\n");
	 	printf("\n O n�mero %d � par!",numero);
	}
	else
	{
		printf("\n");
		printf("\n O n�mero %d � �mpar!",numero);
	}	

	return 0;
}
