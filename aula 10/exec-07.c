// 7) Faça um programa que mostre n elementos da sequência de
// Fibonacci.
//  O valor de n é passado para o programa.
//  O primeiro termo é 0, e o segundo termo é 1, os demais devem seguir a
// fórmula t(n) = t(n-1) + t(n-2)

#include <stdio.h>
#include <stdlib.h>

int main() {
  int seqFibonacci;

  do {
    printf("Insira quantos elemento tera a sequência: ");
    scanf("%d", &seqFibonacci);
  } while (seqFibonacci < 1);

  for (int i = 1, termoProx = 0, termoAtual = 1, termoAnterior = 0;
       i <= seqFibonacci; i++) {
    if (i == 1) {
      printf("Index %d: %d\n", i, termoAtual);
    } else {
      termoProx = termoAtual + termoAnterior;
      termoAnterior = termoAtual;
      termoAtual = termoProx;

      printf("Index %d: %d\n", i, termoAtual);
    }
  }

  return 0;
}
