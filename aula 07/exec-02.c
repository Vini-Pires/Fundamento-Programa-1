// 2) Crie uma calculadora usando a instrução switch, que
// pergunte qual das operações básicas quer fazer (+, -, *
// e /), em seguida peça os dois números e mostre o
// resultado da operação matemática entre eles.

#include <stdio.h>
#include <stdlib.h>

int main() {
  char option;
  float numOne, numTwo;
  float count;

  printf("Escolha a operação matemática\n");
  printf("+ <- Adição\n");
  printf("- <- Subtração\n");
  printf("* <- Multiplicação\n");
  printf("/ <- Divisão\n");
  scanf("%c", &option);

  printf("Insira o primeiro termo: ");
  scanf("%f", &numOne);
  printf("Insira o segundo termo: ");
  scanf("%f", &numTwo);

  switch (option) {
    case '+':
      count = numOne + numTwo;
      break;
    case '-':
      count = numOne - numTwo;
      break;
    case '*':
      count = numOne * numTwo;
      break;
    case '/':
      count = numOne / numTwo;
      break;

    default:
      printf("Opção invalida\n");
      break;
  }
  printf("O resultado da conta é %.2f\n", count);
}
