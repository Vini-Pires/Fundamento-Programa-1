// 2) Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e
// retorna a soma dos elementos da sua diagonal principal e
// da sua diagonal secundária;

#include <stdio.h>
#include <stdlib.h>

int main() {
  int matriz[3][3] = {{2, 0, 10}, {1, 5, 7}, {4, 6, 3}};
  int somaDiagonalPrincipal = 0;
  int somaDiagonalSecundaria = 0;

  for (int i = 1; i <= 2; i++) {
    for (int l = 0; l < 3; l++) {
      for (int c = 0; c < 3; c++) {
        if (l == c && i == 1) {
          somaDiagonalPrincipal += matriz[l][c];
        } else if (i == 2){
          if (l == 0 && c == 2){
            somaDiagonalSecundaria += matriz[l][c];
          } else if (l == 1 && c == 1){
            somaDiagonalSecundaria += matriz[l][c];
          } else if (l == 2 && c == 0){
            somaDiagonalSecundaria += matriz[l][c];
          }

        }

      }
    }
  }

  printf("Soma da diagonal principal: %d\n", somaDiagonalPrincipal);
  printf("Soma da diagonal secundaria: %d\n", somaDiagonalSecundaria);

  return 0;
}
