#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0;
  int isEven = 0;

  while (i <= 20) {
    if (i % 2 == 0) {
      isEven++;
    }
    i++;
  }
  printf("A quantidade de numeros pares ate 20 = %d\n", isEven);

  return 0;
}
