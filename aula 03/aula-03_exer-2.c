/*
2) Declare duas variáveis inteiras A e B e atribua valores
diferentes. Em seguida, efetue a troca dos valores de forma
que, a variável A passe a possuir o valor da variável B, e que a
variável B passe a possuir o valor da variável A. Apresente os
valores iniciais e finais de A e B.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  // Declarando variáveis
  int varPri;
  int varSeg;
  int varTroca;

  // Atribuindo valores

  varPri = 55;
  varSeg = 9090;

  // Exibe antes da troca
  printf("\n");
  printf("O valor de A é %d\n", varPri);
  printf("O valor de B é %d\n", varSeg);

  // Troca de valores
  varTroca = varPri;
  varPri = varSeg;
  varSeg = varTroca;

  // Necessário uma terceira variável para armazenar o valor da primeira variável para q n se perca nas reatribuições

  // Exibe os valores dps da troca
  printf("\n");
  printf("O valor de A é %d\n", varPri);
  printf("O valor de B é %d\n", varSeg);
}
