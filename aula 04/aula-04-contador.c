#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador = 15;

  printf("\n");
  printf("O contador vale %d\n", contador);

  // Incrementa
  contador++;  // de 1 em 1

  // Incrementa mais um valor especificado ou decrementa ou multiplica ou divide, qq operador matemático
  // contador = contador + 3;
  // contador += 3;

  printf("Agora ele vale %d\n", contador);

  // decrementando
  contador--;  // de 1 em 1
  printf("Diminuindo ele vale agora %d\n", contador);
  return 0;
}
