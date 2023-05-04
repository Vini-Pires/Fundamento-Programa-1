#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador = 0;

  while (contador < 10) {
    contador++;
    if (contador == 5) {
      continue;  // dessa forma ele pula o 5 e continua o loop
    }
    printf("Num: %d\n", contador);
  }
  return 0;
}
