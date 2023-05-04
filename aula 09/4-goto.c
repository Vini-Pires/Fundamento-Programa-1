#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador = 0;

inicio:
  printf("Contador: %d\n", contador);
  contador++;
  if (contador == 10) {
    goto fim;
  }
  goto inicio;

fim:
  return 0;
}

// Jamais usar esse tipo de código, péssima manutenção e difícil compreensão
