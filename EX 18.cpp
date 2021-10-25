#include<stdio.h>
#include<locale.h>


int main()
{
	setlocale(LC_ALL, "Portuguese");
    int tabuada = 0;
    int x;
    printf("\n Digite o número correspondente a tabuada que você deseja saber e aperte o Enter: \n");
    scanf("%i", &tabuada);

    for( x = 1; x<=10; ++x){
        printf("\n");
        printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }

    return 0;
}


