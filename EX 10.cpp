#include <stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
        float num1,
              num2;
        char oper;

        {
            printf("\t  CALCULADORA: \n\n");

            printf("\t\n Opera��es dispon�veis:\n");
            printf("\t+ : Soma\n");
            printf("\t- : Subtra��o\n");
            printf("\t* : Multipli��o\n");
            printf("\t/ : Divis�o\n");
            printf("\t%% : Resto da divis�o\n");

            printf("\n Digite dois n�meros, a opera��o desejada e aperte o Enter: \n");
    
            scanf("%f", &num1);
            scanf("%c",&oper);
            scanf("%f", &num2);

        

            printf("Calculando: %.2f %c %.2f = ", num1,oper,num2);


            switch( oper )
            {
                case '+':
                        printf("%.2f\n\n", num1 + num2);
                        break;

                case '-':
                        printf("%.2f\n\n", num1 - num2);
                        break;

                case '*':
                        printf("%.2f\n\n", num1 * num2);
                        break;

                case '/':
                        if(num2 != 0)
                            printf("%.2f\n\n", num1 / num2);
                        else
                            printf("Nao existe divisao por 0\n\n");
                        break;

                case '%':
                        printf("%d\n\n", (int)num1 % (int)num2);
                        break;

                default:
                        if(num1 != 0 && oper != '0' && num2 != 0)
                            printf(" Operador invalido\n\n ");
                        else
                            printf(" Fechando calculadora!\n ");
            }

        }
		while(num1 != 0 && oper != '0' && num2 != 0);

}
