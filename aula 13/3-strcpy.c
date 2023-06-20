#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char nome[11];
  char novoNome[11];
  char sobrenome[21] = "de Azevedo";

  printf("Insira o nome: ");
  fgets(nome, 11, stdin);
  nome[strcspn(nome, "\n")] = '\0';
  setbuf(stdin, NULL);

  // strcpy(novoNome, nome);
  // copia uma string a uma nova string
  strcat(nome, " "); // dando espaço já q ao concatenar n adiciona espaço por padrão
  strcat(nome, sobrenome);
  // concatena a str nome a str sobrenome
  // (cuidado, essa função sobrescreve a str nome)

  printf("Ola %s, seja bem vindo", nome);
  printf("\n");

  return 0;

}
