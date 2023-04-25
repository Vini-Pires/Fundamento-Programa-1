#include <stdio.h>
#include <stdlib.h>

int main() {
  int idade;
  printf("Digite uma idade: ");
  scanf("%d", &idade);

  if (idade >= 12 && idade <= 17) {
    printf("Você é um adolescente\n");
  } else {
    if (idade >= 18) {
      printf("Você é um adulto\n");
    } else {
      printf("Você é uma criança\n");
    }
  }
  return 0;
}
