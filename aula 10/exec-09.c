// 9) Desenvolva um programa que receba um numero
// tamanho e exiba um quadrado de tamanho tamanho
// utilizando o carácter #
// Obs:
// Para a exibição utilize apenas os comandos
// printf(“#”); e printf(“\n”);

#include <stdio.h>
#include <stdlib.h>

int main() {
  int tamanho;

  do{
    printf("Insira o tamanho do quadrado: ");
    scanf("%d", &tamanho);
  }while(tamanho < 1);

  for (int c = 0; c < tamanho; c++) {
    for (int i = 0; i < tamanho; i++) {
      printf("# ");
    }
    printf("\n");
  }

  return 0;
}
