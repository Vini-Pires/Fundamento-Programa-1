/*
Um programa que pega a idade e verifica se é maior de 18 ou não
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int idade;
  printf("\n");
  printf("Digite uma idade: ");
  scanf("%d", &idade);

  if (idade >= 18) {
    printf("Parabéns ja pode ser preso\n");
    printf("Idade = %d\n", idade);

  } else {
    printf("Ainda é menor de idade\n");
    printf("Idade = %d\n", idade);
  }
  return 0;
}
