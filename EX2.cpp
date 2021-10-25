#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	float mb,conv;
	
	printf("\n Digite o valor em Mbps a ser convertido para Kbps: ");
	scanf("%f",&mb);
	
	conv = mb*1000 ;
	printf("\n Na conversão é equivalente a:%9.f Kbps",conv);
	
	return 0;
}
