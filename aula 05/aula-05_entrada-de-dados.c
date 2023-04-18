#include <stdio.h>
#include <stdlib.h>

int main() {
  int idade;

  printf("\n");

  printf("Endereço de memória: %p\n", &idade);  // mostra o hexadecimal dessa variável
  printf("Idade tem valor = %d\n", idade);      // Mostra qual valor esta armazenado na variável pré declaração

  printf("Insira a idade: ");
  scanf("%d", &idade);  // Armazena a variável imediatamente no endereço de memória
  printf("\n");

  /* Coleta a idade informada pelo terminal e joga na variável "idade" */

  printf("Endereço de memoria: %p\n", &idade);  // mostra o hexadecimal dessa variável
  printf("Idade informada = %d\n", idade);
  printf("\n");

  /* Exibe a idade armazenada, e percebemos que o endereço de memoria fica imutável */

  return 0;
}
