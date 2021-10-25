#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL, "portuguese");
	int qtd,i, notaC, P1,P2, cont=0;
	
	printf("\n Quantidade de participantes: ");
	scanf("%d",&qtd);
	printf("\n");
    printf("\n Nota de corte: ");
	scanf("%d", &notaC);
    for(i=1;i<=qtd;i++)
    {
	   
	   printf("\n");
	   printf("\n Pontuações do participante %d:\n",i);
	   scanf("%d%d",&P1, &P2);
	   if ( (P1+P2)>= notaC)
	   cont++;
	}
 	    printf("\n");
		printf("\n Quantidade de classificados: %d",cont);
	
}
