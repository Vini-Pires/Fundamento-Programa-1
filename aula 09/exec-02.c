// 2) Faça um programa que receba valores enquanto eles estiverem no
// intervalo de 500 a 1000. Ao receber um valor fora da faixa, o
// programa deverá parar de solicitar valores, exibir quantos valores
// válidos foram digitados e finalizar

#include <stdio.h>
#include <stdlib.h>

int main() {
  int numValid = 0;
  float numInside;

  do {
    printf("Insira um valor entre 500 até 1000: ");
    scanf("%f", &numInside);

    if (500 <= numInside && numInside <= 1000) {
      numValid++;
    }
  } while (500 <= numInside && numInside <= 1000);

  printf("Os numeros validos registrados foram %d\n", numValid);

  return 0;
}
