#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main ()
{
	setlocale(LC_ALL,"");
	
	int litros_km,tempo,vel,dist,litros;
	
	printf(" \n Informe o tempo em horas: ");
	scanf("%d",&tempo);
	
	printf(" \n Informe a velocidade m�dia em km/s:  ");
	scanf("%d",&vel);

	dist=tempo*vel;
	
	printf(" \n Informe os km por litro do autom�vel: ");
	scanf("%d",&litros_km);
	
	litros=dist/litros_km;
	
	printf("\n");
	printf("\n A quantidade de litros utilidados � de %d. \n",litros);
	
	return 0;
}
