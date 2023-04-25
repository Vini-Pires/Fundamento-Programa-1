// 5) Sabendo que a função sqrt(valor), que está na biblioteca
// math.h retorna a raiz quadrada do valor, calcule a raiz
// quadrada de um número que o usuário digitar.

// Utilizar tipo double para números reais nas funções matemáticas!
// No printf ou scanf, utilizar %lf

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float num;
  double raiz;

  printf("Digite um numero para colocar na raiz quadrada: ");
  scanf("%f", &num);

  raiz = sqrt(num);

  printf("Essa é a raiz de %f: %lf\n", num, raiz);

  return 0;
}

/*

  para configurar o compilador faça:
  > entre em "c/c++ compile run" nas extensões
  > na engrenagem
  > configurações de extensão
  > c-cpp-compile-run: c-flags
  > adicione " -lm"
  > seja feliz com o código compilando lindamente com a biblioteca math.h

*/
