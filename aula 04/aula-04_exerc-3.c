/*
3) Faça um programa com 2 variáveis, A e B, onde A terá
o valor 40 e B terá o valor -1. Imprima o valor de A+B, A-B,
AxB e A/B. Em seguida, faça B incrementar de uma
unidade e repita as 4 operações.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int priNum = 40;
  int segNum = -1;
  int sum;
  int deduct;
  int multiply;
  float division;

  // printf("\n");
  // printf("Insira um número e pressione enter para continuar...\n");
  // scanf("%d", &priNum);
  // printf("\n");
  // printf("Insira outro valor e pressione enter para continuar...\n");
  // scanf("%d", &segNum);

  sum = priNum + segNum;
  deduct = priNum - segNum;
  multiply = priNum * segNum;
  division = (float)priNum / segNum;

  // Informação das operações matemáticas
  printf("\n");
  printf("Soma: %d\n", sum);
  printf("Subtração: %d\n", deduct);
  printf("Multiplicação: %d\n", multiply);
  printf("Divisão: %.2f\n", division);
  printf("\n");

  segNum++;  // incremento do valor da variável

  sum = priNum + segNum;
  deduct = priNum - segNum;
  multiply = priNum * segNum;
  division = (float)priNum / segNum;
  /*
    Fazer uma divisão por zero usando números inteiros gera erro no código gerando "exceção de ponto flutuante (imagem do núcleo gravada)", fazendo o código nem rodar

    Tem como fazer com que rode usando casting em uma das variáveis, porem ainda assim não faz com que a divisão ocorra
  */

  printf("---APÓS INCREMENTO---\n");
  printf("Soma: %d\n", sum);
  printf("Subtração: %d\n", deduct);
  printf("Multiplicação: %d\n", multiply);
  printf("Divisão: %.2f\n", division);
  printf("\n");

  return 0;
}
