// 1) Sabendo-se que 200 quilowatts de energia custa um quarto do salário mínimo, faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência e mostre:
// a) O valor em reais de cada quilowatt;
// b) O valor em reais a ser pago pelos quilowatts gasto;
// c) O novo valor a ser pago por essa residência com um desconto de 12%;

#include <stdio.h>
#include <stdlib.h>

int main(){
  float quilowattPorReal;
  float salarioMinimo;
  float quilowattGasto;
  float quilowattComDesconto;
  float contaPagar;

  printf("Defina o salario minimo\n");
  scanf("%f", &salarioMinimo);

  printf("Quantos quilowatts foram gastos\n");
  scanf("%f", &quilowattGasto);

  quilowattPorReal = (salarioMinimo / (4 * 200));
  contaPagar = quilowattPorReal * quilowattGasto;
  quilowattComDesconto = contaPagar - (contaPagar * (12.0 / 100));

  printf("Cada quilowatt vale R$%.2f\n", quilowattPorReal); // Resposta A
  printf("Você pagara R$%.2f gastando %.0f quilowatts\n", contaPagar, quilowattGasto); // Resposta B
  printf("Com desconto você pagara R$%.2f\n", quilowattComDesconto); // Resposta C

  return 0;
}
