#include <stdio.h>
#include <stdlib.h>

int main() {
  char letra;
  int num1;
  int num2;

  printf("\n");

  printf("digite o numero 1:");
  scanf("%d", &num1);
  setbuf(stdin, NULL);
  /* Necessária essa linha para coletar um dado de caractere pois ao pressionar enter para avançar para o proximo scanf ele coleta imediatamente o enter, pulando a inserção do carácter.
  Adicionando essa linha o compilador entende que não deve coletar os dados que estão em buffer */
  printf("digite uma letra:");
  scanf("%c", &letra);
  printf("digite o numero 2");
  scanf("%d", &num2);

  printf("\n");

  return 0;
}
