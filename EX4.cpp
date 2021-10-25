#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	float area,pi=3.14,r,h;
	
	printf("\n Informe o raio do cilindro em cm: ");
	scanf("%f",&r);
	
	printf("\n Informe a altura em cm: ");
	scanf("%f",&h);
	
	area = (2*pi*r)*(r+h);
	
	printf("\n A área deste cilindro é de %.2f cm²",area);
	printf("\n");
	
	return 0;	
} 
