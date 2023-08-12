// 1) Crie um programa para armazenar 10 nomes em um vetor
// e imprimir uma lista numerada

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char nomes[10][50];

  for (int i = 0; i < 10; i++) {
    printf("Insira o nome %d: ", i+1);
    fgets(nomes[i], 50, stdin);
    setbuf(stdin, NULL);
    nomes[i][strcspn(nomes[i], "\n")] = "\0";
  }

  for (int i = 0; i < 10; i++) {
    printf("%02d - Nome: %s\n", i+1, nomes[i]);
  }

  return 0;
}
