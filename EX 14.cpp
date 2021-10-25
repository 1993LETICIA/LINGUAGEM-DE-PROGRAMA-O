#include<stdio.h>


int main() 
{
    float massa, altura, imc;

    printf("\n\t IMC abaixo de 20 : abaixo do peso");
    printf("\n\t IMC de 20 a 25 : peso normal");
    printf("\n\t IMC de 25 a 30 : Sobre peso");
    printf("\n\t IMC abaixo de 40 a mais : obeso morbido  \n \n");
    printf("\n Digite seu peso (em kg): ");
    scanf("%f", &massa);
    
    printf("\n Digite sua altura em metros:");
    scanf("%f",&altura);

    imc = massa / (altura * altura);

    if(imc < 20)
        printf("\n IMC: %f\tAbaixo do peso\n", imc);
    else if(imc >= 20 && imc < 25)
        printf("\n IMC: %f\tPeso normal\n", imc);
    else if(imc >= 25 && imc < 30)
        printf("\n IMC: %f\tSobrepeso\n", imc);
    else if(imc >= 30 && imc < 40)
        printf("\n IMC: %f\tObeso\n", imc);
    else if(imc >= 40)
        printf("\n IMC: %f\tObeso morbido\n", imc);
   
}


