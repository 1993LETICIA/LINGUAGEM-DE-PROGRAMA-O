#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"portuguese");
	
	int aleatorio,numero,cont=0;
	
	srand(time(NULL));
	aleatorio=rand()%10;
	
	do 
	{
		printf("Número da sorte: ");
		scanf("%d",&numero);
		cont++;
	}
	while(numero!=aleatorio);
	
	
	printf("\n Parabéns! Você acertou em %d tentativas",cont);
	
	return 0;	
}
