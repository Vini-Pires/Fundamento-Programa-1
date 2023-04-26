// 1) Faça um programa que receba como entrada a nota de
// um aluno. O programa deve exibir “aprovado” caso a nota
// seja igual ou superior a 6, ou exibir “reprovado” caso
// contrário.

#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota;

  printf("Insira a nota do aluno: ");
  scanf("%f", &nota);

  if (nota >= (float)6) {
    printf("Aprovado");
  } else {
    printf("Reprovado");
  }
  printf("\n");

  return 0;
}
