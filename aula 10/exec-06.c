// 6) Faça um programa que receba 10 números e calcule o
// quadrado desse número (um de cada vez).

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int quadrado;

  for(int i = 1; i <= 10; i++){
    printf("%d - Insira o num: ", i);
    scanf("%d", &quadrado);

    quadrado = pow(quadrado, 2);
    printf("Seu quadrado: %d\n", quadrado);
  }

  return 0;
}
