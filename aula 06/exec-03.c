// 3) Faça um programa que receba os coeficientes a, b e c
// de uma equação do segundo grau e retorne as raízes da
// equação (se existirem).
//  Para isso, lembre-se da fórmula de Báskara

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float coeficienteAA, coeficienteBB, coeficienteCC;
  // float baskara;
  float delta;

  printf("Insira o coeficiente A:\n");
  scanf("%f", &coeficienteAA);
  printf("Insira o coeficiente B:\n");
  scanf("%f", &coeficienteBB);
  printf("Insira o coeficiente C:\n");
  scanf("%f", &coeficienteCC);

  delta = pow(coeficienteBB, 2);
  delta = delta - 4 * coeficienteAA * coeficienteCC;

  return 0;
}
