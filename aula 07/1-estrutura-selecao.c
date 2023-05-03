#include <stdio.h>
#include <stdlib.h>

int main(){
  int opcao;
  printf("Menu de Opções\n");
  printf("1 - Branco\n");
  printf("2 - Preto\n");
  printf("3 - Verde\n");
  printf("4 - Azul\n");
  printf("5 - Cinza\n");

  printf("Digite sua opção\n");
  scanf("%d", &opcao);

  switch (opcao) {
    // opcao não pode ser um float
    case 1: // somente faz operações de igualdade
      printf("Você escolheu Branco\n");
      break;

    case 2:
      printf("Você escolheu Preto\n");
      break;

    case 3:
      printf("Você escolheu Verde\n");
      break;

    case 4:
      printf("Você escolheu Azul\n");
      break;

    case 5:
      printf("Você escolheu Cinza\n");
      break;

    default:
      printf("Opção inválida\n");
      break;

  }
  return 0;
}
