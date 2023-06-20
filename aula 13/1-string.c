#include <stdio.h>
#include <stdlib.h>
#include <string.h> // usar essa lib sempre que usar uma função de string's

int main() {
  char nome[21];

  fgets(nome, 20, stdin);
  // função para armazenar e receber os caracteres de ate 20 char's com o padrão de entrada no teclado
  nome[strcspn(nome, "\n")] = '\0';
  // Substitui o \n pelo \0, que eh responsável por indicar o final da linha
  setbuf(stdin, NULL);

  return 0;
}
