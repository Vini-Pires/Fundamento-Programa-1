// 3) Construa um programa que leia uma matriz de tamanho
// 5 x 5 e escreva:
//  O valor e a localização (linha, coluna) do maior valor encontrado
// na matriz.

#include <stdio.h>
#include <stdlib.h>

int main () {
  // pegar um numero comparar se ele é maior q outro
  // se maior, ent, quebre o loop e use esse numero como comparação após

  int oMaior = 0;
  int matriz[5][5] = {{1,5,3,8,10},{6,4,8,9,7},{0,11,54,3,4},{80,1,0,3,4},{4,1,9,8,6}};


  for (int l = 0; l < 5; l++) {

    for(int c = 0; c < 5; c++) {
      if (matriz[l][c] > oMaior) {
        oMaior = matriz[l][c];
        l = 0;
        break;
      }
    }

  }

}
