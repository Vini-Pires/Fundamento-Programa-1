#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char nome[11];
  char nome2[11];

  printf("Insira nome 1: ");
  fgets(nome, 10, stdin);
  setbuf(stdin, NULL);

  printf("Insira nome 2: ");
  fgets(nome2, 10, stdin);
  setbuf(stdin, NULL);

  if(strcmp(nome, nome2) == 0) {
    // compara as str's, porem tem case sensitive
    // se for realmente iguais eles dão resultado == 0
  }

  if(strcasecmp(nome, nome2) == 0) {
    // compara as str's, mesmo com diferenças de maiúsculas e minusculas
  }


  return 0;
}
