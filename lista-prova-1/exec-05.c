// 5) Faça um programa que receba 2 números referentes ao numerador e denominador de uma fração e informe se é uma fração própria, imprópria, ou aparente

#include <stdio.h>
#include <stdlib.h>

int main() {
  int numerador;
  int denominador;

  printf("Informe o numerador: ");
  scanf("%d", &numerador);
  printf("Informe o denominador: ");
  scanf("%d", &denominador);

  if (denominador != 0) {
    if (numerador < denominador) {
      printf("Fração Própria");
    } else if (numerador > denominador && numerador % denominador != 0) {
      printf("Fração Impropria");
    } else if (numerador % denominador == 0) {
      printf("Fração Aparente");
    }
  } else {
    printf("Frações não devem ser divididas por zero");
  }
  printf("\n");

  return 0;
}
