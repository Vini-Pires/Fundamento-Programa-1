// 5) Faça um programa que receba um número real, calcule e
// exiba o quadrado dele. O programa deverá repetir esse
// procedimento para 10 números, um de cada vez.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 1;

  while (i <= 10) {
    float numPow;
    printf("Insira um número (#%d)\n", i);
    scanf("%f", &numPow);

    numPow = pow(numPow, 2);
    printf("Seu quadrado é %.2f\n", numPow);

    i++;
  }

  return 0;
}
