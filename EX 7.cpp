#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	int verde=0,amarelo=0,branco=0,vtotal,atotal,btotal,cor,bolas,pfinal,cont;
	
	printf("\n Quantas bolinhas voc� pegou?: ");
	scanf("%d",&bolas);
	
	printf("\t 1: Verde \n");
	printf("\t 2: Amarelo \n");
	printf("\t 3: Branco \n");
	printf("\n");
	
	while(cont<bolas)
	{
		printf("\n Digite o n�mero correspondente as cores da bola adquiridas: ");
		scanf("%d",&cor);
		
		switch(cor)
		{
			case 1: 
				verde++;
			break;
			case 2:
				amarelo++;
			break;
			case 3:
				branco++;
			break;
			default: 
				printf(" N�mero Inv�lido! Digite novamente. \n");
		} 
		cont++;
	} 
	
	vtotal=verde*10;
	atotal=amarelo*5;
	btotal=branco*3;
	
	pfinal=vtotal+atotal+btotal;
	
	printf("\n A pontua��o total do participante �: %d \n",pfinal);
	
	return 0;	
} 
