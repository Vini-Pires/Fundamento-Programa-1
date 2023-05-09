// 1) Faça um programa que calcule a média para 5 alunos, sendo que
// cada aluno tem 2 notas (reais). O programa somente deverá aceitar
// notas no intervalo fechado de 0 a 10, solicitando nova digitação
// quando necessário

#include <stdio.h>
#include <stdlib.h>

int main() {
  float nota;
  float notaMedia;
  int notasArmazenadas = 0;
  int alunos = 5;

  do {
    printf("Faltam %d aluno(s) \n", alunos);

    do {
      printf("Insira a nota do aluno: ");
      scanf("%f", &nota);

      if (nota <= 10 && nota >= 0) {
        notaMedia += nota;
        notasArmazenadas++;
        if (notasArmazenadas == 2) {
          notaMedia /= notasArmazenadas;
          printf("Media desse aluno é %.2f \n", notaMedia);
          notaMedia = 0;
        }
      } else {
        printf("Insira uma nota válida\n");
      }

    } while (notasArmazenadas < 2);

    notasArmazenadas = 0;
    alunos--;

  } while (alunos > 0);

  return 0;
}
