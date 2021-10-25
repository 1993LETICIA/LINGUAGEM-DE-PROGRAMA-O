#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
setlocale(LC_ALL,"Portuguese");
	
int dia;
		
	while (1)
	{
		printf("\N Digite o número: ");
		scanf("%d",&dia);
				
		switch(dia)
		{
			case 1: 
				printf(" Domingo \n\n");
			break;
			case 2: 
				printf(" Segunda-Feira \n\n");
			break;
			case 3: 
				printf(" Terça-Feira \n\n");
			break;
			case 4: 
				printf(" Quarta-Feira \n\n");
			break;
			case 5: 
				printf(" Quinta-Feira \n\n");
			break;
			case 6: 
				printf(" Sexta-Feira \n\n");
			break;
			case 7: 
				printf(" Sábado \n\n");
			break;
			default: 
				printf(" Código inválido! \n\n");
		} 
	} 
	
	return 0;
}
