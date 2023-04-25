#include <stdio.h>
#include <stdlib.h>

int main() {
  int dia, mes, ano;

  printf("\n");
  printf("Digite o dia/mes/ano:");
  scanf("%d/%d/%d", &dia, &mes, &ano);
  /* Pode-se escrever de forma que somente os valores sejam pegos numa sentença, desprezando caracteres desnecessários evitando ter q usar um espaço em branco */

  printf("Dia: %d Mes: %d Ano: %d\n", dia, mes, ano);

  return 0;
}
