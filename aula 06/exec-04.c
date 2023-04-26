// 4) Faça um programa que calcule o imposto de renda a ser
// pago tendo como entrada o salário de um empregado. O
// imposto deve ser calculado da seguinte maneira:
// § imposto = salário x alíquota – parcela da dedução

#include <stdio.h>
#include <stdlib.h>
#define CENTO 100.0

int main() {
  float salario;
  float parcelaDeducao;
  float aliquota;
  float imposto;

  printf("Qual seu salario?\n");
  scanf("%f", &salario);

  if (salario <= 1903.98) {
    printf("Você é isento");
  } else if (salario <= 2826.65) {
    aliquota = 7.5 / CENTO;
    parcelaDeducao = 142.8;
    imposto = salario * aliquota - parcelaDeducao;
    printf("Você tem que pagar %.2f de imposto", imposto);
  } else if (salario <= 3751.05) {
    aliquota = 15 / CENTO;
    parcelaDeducao = 354.8;
    imposto = salario * aliquota - parcelaDeducao;
    printf("Você tem que pagar %.2f de imposto", imposto);
  } else if (salario <= 4664.68) {
    aliquota = 22.5 / CENTO;
    parcelaDeducao = 636.13;
    imposto = salario * aliquota - parcelaDeducao;
    printf("Você tem que pagar %.2f de imposto", imposto);
  } else {
    aliquota = 27.5 / CENTO;
    parcelaDeducao = 869.36;
    imposto = salario * aliquota - parcelaDeducao;
    printf("Você tem que pagar %.2f de imposto", imposto);
  }
  printf("\n");

  return 0;
}
