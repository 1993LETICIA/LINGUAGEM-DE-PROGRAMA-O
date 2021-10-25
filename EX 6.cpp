

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	int n1,n2;
	
	printf("\n Digite um número: ");
	scanf("%d",&n1);
	printf("\n");

	printf("\n Digite um número: ");
	scanf("%d",&n2);
	
	if(n1>n2)
	{
		printf("\n");
		printf(" O número %d é maior que o número %d.",n1,n2);
	}
	else
	{
		printf("\n");
		printf(" O número %d é maior que o número %d.",n2,n1);
	}
	
	return 0;	
} 
