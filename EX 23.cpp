
#include <stdio.h>
#include<locale.h>

int main()
 {
  setlocale(LC_ALL,"Portuguese");
  int x, n, potencia=1, cont=0; 
  

  printf("\n Digite um número inteiro: ");
  scanf("%d", &x);
  printf("\n Digite uma base positiva: ");
  scanf("%d", &n);
  

  
  while (cont != n) {
    potencia = potencia * x;
    cont = cont + 1;
  }
  
  printf("\n O valor de %d elevado a %d é: %d\n", x, n, potencia);
  return 0;
}
