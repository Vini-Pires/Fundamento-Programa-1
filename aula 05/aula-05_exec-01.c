// 1) Faça um programa que receba a altura de uma pessoa e
// calcule e exiba seu peso ideal utilizando a seguinte:
// peso ideal = 72.7 x altura – 58

#include <stdio.h>
#include <stdlib.h>

int main() {
  int altura;
  float pesoIdeal;

  printf("Escreva sua altura em centímetros:");
  scanf("%d", &altura);
  printf("\n");

  pesoIdeal = 72 * ((float)altura / 100) - 58;

  printf("Seu peso ideal é: %.2f\n", pesoIdeal);

  return 0;
}
