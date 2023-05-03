// 1) Crie um programa que forneça um menu com duas
// opções. Caso o usuário digite 1, o programa solicitará um
// número e verificará se o valor é par ou impar. Caso o
// usuário digite 2, o programa solicitará uma idade e
// verificará se pessoa é maior ou menor de idade.
// Veja o exemplo de menu abaixo:

#include <stdio.h>
#include <stdlib.h>

int main() {
  int options;
  char wantToCancel;

  printf("Escolha uma das opções abaixo:\n");
  printf("1 - Programa pra verificar par ou ímpar\n");
  printf("2 - Programa pra verificar se é maior de idade\n");
  scanf("%d", &options);

  switch (options) {
    case 1:
      int num;
      int isEven;
      printf("\n");
      printf("Você escolheu o programa que verifica se é par ou ímpar\n");
      printf("Deseja alterar? [Y/n] (default: N)\n");
      setbuf(stdin, NULL);
      scanf("%c", &wantToCancel);

      switch (wantToCancel) {
        case 'Y':
        case 'y':
          printf(
              "Por favor rode o programa mais uma vez, e escolha o programa "
              "certo\n");
          break;

        default:
          printf("Continuando com o programa atual\n");
          printf("Insira o numero para verificar se é par ou ímpar\n");
          scanf("%d", &num);

          isEven = num % 2;

          switch (isEven) {
            case 1:
              printf("Seu número é ímpar\n");
              break;

            default:
              printf("Seu número é par\n");
              break;
          }
          printf("Concluindo o programa\n");
          break;
      }
      break;

    case 2:
      int idade;

      printf("\n");
      printf("Você escolheu o programa que verifica se é maior de idade\n");
      printf("Deseja alterar? [Y/n] (default: N)\n");
      setbuf(stdin, NULL);
      scanf("%c", &wantToCancel);

      switch (wantToCancel) {
        case 'Y':
        case 'y':
          printf(
              "Por favor rode o programa mais uma vez, e escolha o programa "
              "certo\n");
          break;

        default:
          printf("Continuando com o programa atual\n");
          printf("Insira sua idade\n");
          scanf("%d", &idade);

          if (idade >= 18) {
            printf("Você é maior de idade");
          } else {
            printf("Você é menor de idade");
          }
          printf("\n");
          printf("Concluindo o programa\n");
          break;
      }
      break;

    default:
      printf("Opção invalida!\n");
      break;
  }

  return 0;
}
