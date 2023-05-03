#include <stdio.h>
#include <stdlib.h>

int main() {
  char opcao;

  printf("B - Branco\n");
  printf("P - Preto\n");
  printf("V - Verde\n");
  printf("A - Azul\n");
  printf("C - Cinza\n");

  printf("Digite sua opção\n");
  scanf("%c", &opcao);

  switch (opcao){
    case 'b': // ao ter tipo char é necessário usar as aspas simples
    case 'B': // ao executar o program o codigo roda até achar um break, caso não encontre ele continua do momento que ele encontra um case semelhante
      printf("Você escolheu Branco\n");
      break;

    case 'p':
    case 'P':
      printf("Você escolheu Preto\n");
      break;

    case 'v':
    case 'V':
      printf("Você escolheu Verde\n");
      break;

    case 'a':
    case 'A':
      printf("Você escolheu Azul\n");
      break;

    case 'c':
    case 'C':
      printf("Você escolheu Cinza\n");
      break;

    default:
      printf("Opção invalida\n");
      break;
  }

  return 0;
}
