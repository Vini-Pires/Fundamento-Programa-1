// 8) Faça um menu que mostre 3 opções
// Menu do programa:
// 1 - Teste 1
// 2 - Teste 2
// 3 – Sair do programa
// Digite sua opção:
//  A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
//  A segunda opção imprime “Teste2” e mostra o menu novamente.
//  A terceira opção finaliza o programa.
//  Caso digite uma opção diferente, deve mostrar uma mensagem de erro e
// mostrar o menu novamente.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0;
  while (i == 0) {
    int option;
    printf("Escolha uma opção:\n");
    printf("1 - teste 1\n");
    printf("2 - teste 2\n");
    printf("3 - sair do programa\n");
    scanf("%d", &option);

    switch (option) {
      case 1:
        printf("Teste 1\n");
        break;

      case 2:
        printf("Teste 2\n");
        break;

      case 3:
        printf("Saindo do programa\n");
        i++;
        break;

      default:
        printf("digite uma opção valida\n");
    }
    printf("\n");
  }

  return 0;
}
