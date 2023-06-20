// 5) Faça um programa que calcule o fatorial de um número a ser
// digitado

#include <stdio.h>
#include <stdlib.h>

int main() {
  int numFator;
  int resultado = 1;

  do {
    printf("Insira o numero positivo: ");
    scanf("%d", &numFator);
  } while (numFator < 0);

  if (numFator == 0) {
    printf("Fatorial de %d = 1\n", numFator);
  } else {
    for (int i = 1; i <= numFator; i++) {
      resultado *= i;
    }
    printf("Fatorial de %d = %d\n", numFator, resultado);
  }

  return 0;
}
