#include <stdio.h>
#include <stdlib.h>

int main() {
  int idade;

  do {
    printf("Insira uma idade: ");
    scanf("%d", &idade);
  } while (idade < 0);

  return 0;
}
