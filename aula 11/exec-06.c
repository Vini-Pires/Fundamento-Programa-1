// 6) Faça um programa que receba e armazene 20 números em
// um vetor. Em seguida exiba:
//  Quantos números são iguais a 30;
//  Quantos números são maior que a média;
//  Quantos números são iguais à media;

#include <stdio.h>
#include <stdlib.h>

int main() {
  int media;
  int nums[20];
  int somaVets = 0;
  int maiorMedia = 0;
  int igualMedia = 0;
  int igualA30 = 0;

  for(int i = 0; i < 20; i++) {
    printf("Insira o %d: ", i+1);
    scanf("%d", &nums[i]);
    somaVets += nums[i];
  }
  media = somaVets / 20;

  for(int i = 0; i < 20; i++){
    if(nums[i] == 30){
      igualA30++;
    }
    if(nums[i] == media){
      igualMedia++;
    }
    if(nums[i] > media) {
      maiorMedia++;
    }
  }

  printf("Igual media %d\n", igualMedia);
  printf("Igual a 30 %d\n", igualA30);
  printf("Maior que a media %d\n", maiorMedia);

  return 0;
}
