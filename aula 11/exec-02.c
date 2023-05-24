// 2) Crie um algoritmo que receba 10 números e os armazene em
// um vetor A. Em seguida, gere o vetor B onde cada elemento é o
// quadrado do valor da mesma posição no vetor A

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetor[10];
  int v_quadrado[10];

  for(int i = 0; i < 10; i++) {
    printf("Elemento %d: ", i+1);
    scanf("%d", &vetor[i]);
    v_quadrado[i] = pow(vetor[i], 2);
  }

  for(int i = 0; i < 10; i++) {
    printf("%d Seu quadrado: %d\n", i+1, v_quadrado[i]);
  }

  return 0;

}
