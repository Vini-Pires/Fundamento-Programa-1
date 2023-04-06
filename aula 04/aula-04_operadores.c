// Operadores matemáticos

#include <stdio.h>
#include <stdlib.h>

int main(){
  int pri = 10;
  int seg = 3;
  int soma;
  int subtracao;
  float divisao;
  int multiplica;
  int resto;

  printf("\n");

  soma = pri + seg;
  printf("soma %d\n", soma);

  subtracao = pri - seg;
  printf("subtração %d\n", subtracao);

  multiplica = pri * seg;
  printf("multiplica %d\n", multiplica);

  divisao = (float)pri / seg;
  printf("divisão %f\n", divisao); // por ter uso de variáveis float o % deve ser com "f"

  resto = pri % seg; // somente possível com variáveis int
  printf("resto da divisão %d\n", resto);

  printf("\n");

  return 0;
}
