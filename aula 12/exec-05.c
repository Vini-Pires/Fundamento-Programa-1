//  Somando/Subtraindo duas matrizes
//  Para somar/subtrair 2 matrizes A e B, ambas devem ter o mesmo número
// de linhas e colunas (mesma ordem). A matriz resultante C tem a mesma
// ordem.
//  A soma/subtração ocorre entre os elementos correspondentes da célula A
// com a célula B ( mesma coordenada)
// Cx,y = Ax,y ± Bx,y
//  Exercício 5) Faça um programa que some as matrizes A e B,
// gerando C

#include <stdio.h>
#include <stdlib.h>

int main() {
  int tamLinhasA = 2;
  int tamColunasA = 3;
  int tamLinhasB = 2;
  int tamColunasB = 3;
  int tamLinhasC;
  int tamColunasC;

  int matrizA[2][3] = {{3, 7, 10}, {1, 5, 0}};
  int matrizB[2][3] = {{2, 3, 4}, {6, 0, 2}};
  int matrizC[2][3];

  if (tamLinhasA == tamLinhasB && tamColunasA == tamColunasB) {
    tamColunasC = tamColunasA;
    tamLinhasC = tamLinhasA;
    for (int l = 0; l < tamLinhasC; l++) {
      for(int c = 0; c < tamColunasC; c++) {
        matrizC[l][c] = matrizA[l][c] + matrizB[l][c];
      }
    }
  }

  for (int l = 0; l < tamLinhasC; l++) {
    for (int c = 0; c < tamColunasC; c++) {
      printf("%4d ", matrizC[l][c]);
    }
    printf("\n");
  }

  return 0;
}
