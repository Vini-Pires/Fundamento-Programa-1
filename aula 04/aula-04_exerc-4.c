// 4) Tendo a Altura da pessoa definida como uma constante,
// calcule seu peso ideal utilizando a seguinte fórmula:
//  peso ideal = 72.7 x altura – 58

#include <stdio.h>
#include <stdlib.h>
#define altura 1.70

int main() {
  float pesoIdeal;

  pesoIdeal = 72.7 * altura - 58;

  printf("\n");
  printf("Peso ideal para alguém de %.2fm: %.2f\n", altura, pesoIdeal);
  printf("\n");

  return 0;
}
