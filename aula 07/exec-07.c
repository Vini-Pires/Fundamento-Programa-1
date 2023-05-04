// 7) Faça um programa que calcule o fatorial de um número a ser
// digitado.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int fatorial = 1;
  int num;

  printf("Insira o número fatorial: ");
  scanf("%d", &num);

  while (num > 0) {
    fatorial *= num;
    printf("O fatorial parcial (%d)\n", fatorial);
    num--;
  }

  printf("O fatorial é: %d\n", fatorial);

  return 0;
}
