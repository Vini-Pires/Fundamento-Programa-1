// 1) Crie uma matriz identidade com dimensões 5 x 5;

#include <stdio.h>
#include <stdlib.h>

int main () {

  int matriz[5][5];

  for (int l = 0; l < 5; l++){
    for (int c = 0; c < 5; c++){
      if (l == c){
        matriz[l][c] = 1;
      } else {
        matriz[l][c] = 0;
      }
    }
  }

  // Exibindo matriz identidade

  for (int l = 0; l < 5; l++) {
    for (int c = 0; c < 5; c++) {
      printf("%d ", matriz[l][c]);
    }
    printf("\n");
  }

  return 0;
}
