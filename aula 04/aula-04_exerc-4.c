// 4) Tendo a Altura da pessoa definida como uma constante,
// calcule seu peso ideal utilizando a seguinte fórmula:
//  peso ideal = 72.7 x altura – 58

#include <stdio.h>
#include <stdlib.h>
#define altura 1.70

int main() {
  float peso;
  peso = 72.7 * altura - 58;
  printf("%.2f\n", peso);
  return 0;
}
