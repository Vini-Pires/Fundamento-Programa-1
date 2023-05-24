// 5)Dado dois vetores, A (4 elementos) e B (5 elementos), faça
// um programa em C que imprima todos os elementos comuns
// aos dois vetores.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetorA[4] = {10, 20, 30, 20};
  int vetorB[5] = {80, 30, 20, 40, 50};

  for(int i = 0; i < 4; i++) {
    for(int c = 0; c < 5; c++){
      if(vetorA[i] == vetorB[c]){
        printf("Em comum: %d\n", vetorB[c]);
      }
    }
  }

}
