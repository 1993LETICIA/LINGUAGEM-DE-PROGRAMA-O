#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	int fat,i;
	
	printf("\n Digite UM número para ser fatorado: ");
	scanf("%d",&fat);

	for(i=1;fat>=1;fat--)
	{
		i=i*fat;
	} 
	
	printf("\n A resposta é %d.",i);
	printf("\n");
	
	return 0;	
} 
