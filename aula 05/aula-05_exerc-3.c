/*3) Faça um programa com 2 variáveis, A e B, onde A terá
o valor 40 e B terá o valor -1. Imprima o valor de A+B, A-B,
AxB e A/B. Em seguida, faça B incrementar de uma
unidade e repita as 4 operações.*/

#include <stdio.h>
#include <stdlib.h>

int a;
int b;
int soma;
int subtracao;
int multiplicacao;
float divisao;

int main() {
  scanf("%d %d", &a, &b);
  soma = a + b;
  subtracao = a - b;
  multiplicacao = a * b;
  divisao = (float)a / b;
  printf("%d\n", soma);
  printf("%d\n", subtracao);
  printf("%d\n", multiplicacao);
  printf("%.2f\n", divisao);

  b = b + 1;

  soma = a + b;
  subtracao = a - b;
  multiplicacao = a * b;
  divisao = (float)a / b;
  printf("%d\n", soma);
  printf("%d\n", subtracao);
  printf("%d\n", multiplicacao);
  printf("%.2f\n", divisao);

  return 0;
}
