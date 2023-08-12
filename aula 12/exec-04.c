//    Multiplicando uma matriz por um escalar
//  Uma matriz C é criada com seus elementos gerados a partir da
// multiplicação de cada célula da matriz A pelo número escalar
//  C x,y = A x,y * escalar
//    Exercício
// 4) Faça um programa que multiplique por 5 a
// matriz A (preenchida a partir do teclado) para gerar a
// matriz C.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int tamanhoLinha;
  int tamanhoColuna;
  int itemMatriz;

  do {
    printf("Insira o tamanho da matriz\n");
    printf("Insira a linha: ");
    scanf("%d", &tamanhoLinha);
    printf("Insira a coluna: ");
    scanf("%d", &tamanhoColuna);
  } while (tamanhoLinha < 0 && tamanhoColuna < 0);

  int matrizA[tamanhoLinha][tamanhoColuna];
  int matrizC[tamanhoLinha][tamanhoColuna];

  for (int l = 0; l < tamanhoLinha; l++) {
    for (int c = 0; c < tamanhoColuna; c++) {
      printf("Insira o termo da [linha(%d) coluna(%d)]: ", l, c);
      scanf("%d", &itemMatriz);

      matrizA[l][c] = itemMatriz;
    }
  }

  for (int l = 0; l < tamanhoLinha; l++) {
    for (int c = 0; c < tamanhoColuna; c++) {
      matrizC[l][c] = matrizA[l][c] * 5;
    }
  }

  for (int l = 0; l < tamanhoLinha; l++) {
    for (int c = 0; c < tamanhoColuna; c++) {
      printf("%5d ", matrizC[l][c]);
    }
    printf("\n");
  }

  return 0;
}
