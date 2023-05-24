// 4) Crie e inicialize um vetor de inteiros de tamanho 8. Faça a
// soma dos seus elementos, e apresente o resultado.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int somaVets = 0;
  int vetor[8] = {1, 24, 3, 25, 5, 26, 7, 27};

  for(int i = 0; i < 8; i++) {
    somaVets += vetor[i];
  }

  printf("A soma dos inteiros no vetor: %d\n", somaVets);

  return 0;

}
