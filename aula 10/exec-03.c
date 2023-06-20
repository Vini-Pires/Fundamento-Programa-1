// 3) Crie um algoritmo que exiba todos os números múltiplos
// de 5 no intervalo de 1 a 500

#include <stdio.h>
#include <stdlib.h>

int main () {
  for(int i = 1; i <=500; i++) {
    if(i % 5 == 0){
      printf("Múltiplo de 5: %d\n", i);
    }
  }
  return 0;
}
