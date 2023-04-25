#include <stdio.h>
#include <stdlib.h>

int main() {
  int producao;
  int meta;

  printf("Produção do mês: ");
  scanf("%d", &producao);

  meta = producao < 200 ? 0 : 1;
  // var = condição ? se verdadeiro : se falso;

  if (meta == 1)
    printf("batemos a meta\n");
  else  // caso haja somente 1 única linha de comando, as {} chaves não são necessárias
    printf("Não batemos a meta\n");

  return 0;
}
