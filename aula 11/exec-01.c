// 1) Faça um programa que leia e armazene dois vetores de
// tamanho 5. Ao final o programa deve calcular e exibir o vetor
// soma;

#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetor1[5];
  int vetor2[5];
  int vetorSoma[5];

  printf("Insira os elementos do vetor 1\n");
  for (int i = 0; i < 5; i++) {
    printf("Elemento %d: ", i+1);
    scanf("%d", &vetor1[i]);
  }
  printf("Insira os elementos do vetor 2\n");
  for(int i = 0; i < 5; i++){
    printf("Elemento %d: ", i+1);
    scanf("%d", &vetor2[i]);
  }

  for(int i = 0; i < 5; i++) {
    vetorSoma[i] = vetor1[i] + vetor2[i];
    printf("Soma do dos elemento %d: %d\n", i+1, vetorSoma[i]);
  }

  return 0;
}
