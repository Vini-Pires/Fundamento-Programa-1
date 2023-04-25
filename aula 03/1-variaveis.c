#include <stdio.h>
#include <stdlib.h>

int main() {
  int idade = 0;
  float salario = 0;
  char bloco;

  idade = 18;
  salario = 12567;
  bloco = 'n';  // Para atribuição de caracteres são necessárias aspas simples

  printf("\n");
  printf("Idade: %d \n", idade);
  printf("Salario: %.2f\n", salario);  // para formatar e pegar somente duas casas decimais

  printf("\n");
  return 0;
}
