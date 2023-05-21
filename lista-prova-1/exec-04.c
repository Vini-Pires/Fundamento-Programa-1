// 4)Faça um programa que receba 3 idades distintas e mostre: a idade da pessoa mais velha; a idade da pessoa mais nova e a média das 3 idades . O programa deve considerar e informar o caso de 2 ou 3 pessoas terem a mesma idade.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int idade1;
  int idade2;
  int idade3;
  int maior_idade;
  int menor_idade;
  float media_idade;

  printf("Insira idade 1: ");
  scanf("%d", &idade1);
  printf("Insira idade 2: ");
  scanf("%d", &idade2);
  printf("Insira idade 3: ");
  scanf("%d", &idade3);

  if (idade1 == idade2 && idade1 == idade3) {
    printf("Todas as idade são iguais");
  } else if (idade1 == idade2) {
    printf("Idade 1 igual idade 2");
  } else if (idade1 == idade3) {
    printf("Idade 1 igual idade 3");
  } else if (idade2 == idade3) {
    printf("Idade 2 igual idade 3");
  }
  printf("\n");

  if (idade1 >= idade2 && idade1 >= idade3) {
    maior_idade = idade1;
  } else if (idade2 >= idade1 && idade2 >= idade3) {
    maior_idade = idade2;
  } else {
    maior_idade = idade3;
  }

  if (idade1 <= idade2 && idade1 <= idade3) {
    menor_idade = idade1;
  } else if (idade2 <= idade1 && idade2 <= idade3) {
    menor_idade = idade2;
  } else {
    menor_idade = idade3;
  }
  media_idade = (float)(idade1 + idade2 + idade3) / 3;

  printf("A maior idade é %d\n", maior_idade);
  printf("A menor idade é %d\n", menor_idade);
  printf("A media das idades é %.2f\n", media_idade);

  return 0;
}
