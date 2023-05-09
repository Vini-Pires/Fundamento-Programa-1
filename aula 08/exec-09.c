// 9) Faça um programa que simule um jogo, onde o usuário
// deverá descobrir um número aleatório escolhido pelo
// computador (de 1 a 100).
//  O usuário poderá realizar até 6 tentativas, o programa deverá
// retornar as mensagens “muito alto”, “muito baixo” até o usuário
// acertar o número ou esgotar o número máximo de tentativas

// Pesquise sobre como gerar um numero aleatório
// utilizando a função rand da biblioteca stdlib.h

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  // com esse comando o computador pegara números diferentes toda vez que for executado baseando-se em cálculos com os segundos desde 1970 ate hj em dia

  int numRandom = rand() % 100;  // limitando os números aleatórios ate 100
  int numDigitado = 1000;
  int tentativas = 6;

  while (numDigitado != numRandom && tentativas > 0) {
    tentativas--;

    printf("Insira um Numero: ");
    scanf("%d", &numDigitado);

    if (tentativas > 0) {
      if (numDigitado == numRandom) {
        printf("Parabéns você acertou o número o numero era %d\n", numRandom);
        break;
      } else if (numDigitado < numRandom) {
        printf("Muito Baixo\n");
      } else {
        printf("Muito Alto\n");
      }
    } else {
      printf("Acabaram suas tentativas o numero era %d\n", numRandom);
    }
  }

  return 0;
}
