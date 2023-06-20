// 8) Utilizando a estrutura do laço for aninhado, crie um
// programa que exiba a tabuada de todos os números de
// 1 a 10

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  int produto;

  for (int i = 1; i <= 10; i++) {
    printf("Tabuada do %d\n", i);

    for (int c = 1; c <= 10; c++) {
      produto = c * i;
      printf("%d X %d = %d\n", i, c, produto);
      usleep(100000);
    }

    printf("\n");
  }

  return 0;
}
