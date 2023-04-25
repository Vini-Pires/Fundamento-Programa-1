// 4) Calcule a média aritmética de 4 números reais que o usuário
// digitar. Imprima a média na tela apenas com 2 casas decimais.

#include <stdio.h>
#include <stdlib.h>

int main() {
  float somado = 0;
  float numero;
  float media;

  printf("digite o primeiro numero para media: ");
  scanf("%f", &numero);

  somado += numero;

  printf("digite o segundo numero: ");
  scanf("%f", &numero);

  somado += numero;

  printf("digite o terceiro numero: ");
  scanf("%f", &numero);

  somado += numero;

  printf("digite o quarto numero: ");
  scanf("%f", &numero);

  somado += numero;
  media = somado / 4;

  printf("A media aritmética é: %f\n", media);

  return 0;
}
