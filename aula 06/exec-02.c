// 2) Faça um programa que receba um número e determine
// se ele é um número par ou ímpar.
//  Obs.: Utilize o operador % que retorna o resto da divisão)

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;
  int isOdd;

  printf("Digite um numero:\n");
  scanf("%d", &num);
  isOdd = num % 2;  // Divide esse numero por 2 e armazena seu resto

  if (isOdd == 0) {
    printf("Par");
  } else {
    printf("Impar");
  }

  printf("\n");

  return 0;
}
