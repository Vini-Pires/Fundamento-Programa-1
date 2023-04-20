// 2) Faça um programa que calcule e mostre a idade de uma
// pessoa a partir do ano em que a pessoa nasceu e do ano atual.
// Os valores serão digitados pelo usuário.
// Obs.:Considere que ela já fez aniversário neste ano

#include <stdio.h>
#include <stdlib.h>

int main() {
  int idadeAtual;
  int anoAtual;
  int anoNascimento;

  printf("Diga o ano que nasceu: ");
  scanf("%d", &anoNascimento);

  printf("Diga o ano atual: ");
  scanf("%d", &anoAtual);

  idadeAtual = anoAtual - anoNascimento;

  printf("\n");
  printf("Sua idade até dia 31 de dezembro será %d anos", idadeAtual);
  printf("\n");

  return 0;
}
