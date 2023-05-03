#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0;
  int sumEven = 0;

  while (i <= 20) {
    if (i % 2 == 0) {
      sumEven += i;
    }
    i++;
  }

  printf("A soma dos números pares até 20 é: %d\n", sumEven);

  return 0;
}
