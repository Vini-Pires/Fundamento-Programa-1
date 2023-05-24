// 3) Leia um vetor A com 10 elementos inteiros correspondentes
// as idades de um grupo de pessoas. Escreva um programa que
// conte e exiba a quantidade de pessoas que possuem idade
// superior a 35 anos.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetorA[10];
  int pessoaAcima35 = 0;

  for(int i = 0; i < 10; i++) {
    printf("Insira a idade %d: ", i+1);
    scanf("%d", &vetorA[i]);
    if(vetorA[i] > 35){
      pessoaAcima35++;
    }
  }

  printf("Idade(s) acima de 35: %d\n", pessoaAcima35);

  return 0;
}
