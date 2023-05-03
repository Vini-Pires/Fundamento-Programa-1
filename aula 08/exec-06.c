// 6) Faça um programa que receba um número real, calcule e
// exiba o quadrado dele. O programa deverá calcular o quadrado
// de vários números e finalizar quando for digitado um número
// negativo ou zero.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0;
  int contador = 1;

  while (i <= 1) {
    float numPow;
    printf("Insira um numero (#%d)\n", contador);
    scanf("%f", &numPow);

    if (numPow <= 0) {
      printf("O número inserido é inferior a 0\n");
      i = 2;
    } else {
      numPow = pow(numPow, 2);
      printf("O quadrado do número é: %.2f\n", numPow);
    }
    contador++;
  }

  return 0;
}
