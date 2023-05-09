// 3) Altere o exercício anterior para receber os 3 valores no
// mesmo scanf.

#include <stdio.h>
#include <stdlib.h>

int main() {
  char operador;
  float primeiroNum, segundoNum;
  float conta;

  printf("Insira a conta que irá realizar: ");
  scanf("%f%c%f", &primeiroNum, &operador, &segundoNum);

  switch (operador) {
    case '+':
      conta = primeiroNum + segundoNum;
      break;
    case '-':
      conta = primeiroNum - segundoNum;
      break;
    case '*':
      conta = primeiroNum * segundoNum;
      break;
    case '/':
      conta = primeiroNum / segundoNum;
      break;
    default:
      printf("Opção invalida\n");
      break;
  }
  printf("Resultado: %.2f\n", conta);

  return 0;
}
