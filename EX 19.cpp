#include<stdio.h>
#include <locale.h>
 
int main() 
{
 setlocale(LC_ALL, "Portuguese");
 int num, i, result= 0;
 
 printf("Digite um n�mero:   ");
 scanf("%d", &num);
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       result++;
       break;
    }
 }
 
 if (result == 0)
    printf("\n %d � um n�mero primo.\n", num);
 else
    printf("\n %d n�o � um n�mero primo.\n", num);
 
 return 0;
}
