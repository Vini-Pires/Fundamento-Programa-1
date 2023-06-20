#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// tem a função usleep que permite exibir os numeros de forma mais lenta no
// terminal

int main() {
  // declaração externa
  int contador;

  for (contador = 0; contador <= 5; contador++) {
    printf("Contador=%d\n", contador);
  }

  // declaração interna
  for (int c = 0; c <= 5; c++) {
    printf("Declaração interna: %d\n", c);
  }

  // varias variáveis
  int soma = 0;
  for (int c = 0, d = 5; c < 5 && soma < 6; c++, d -= 2) {
    soma += c;
    printf("%d e %d\n", c, d);
  }
  printf("Soma: %d\n", soma);

  // aninhando for's
  for (int x = 0; x < 10; x++) {
    for (int y = 0; y < 10; y++) {
      printf("Coordenadas: (%d, %d)\n", x, y);
      usleep(500000);
    }
  }

  return 0;
}
