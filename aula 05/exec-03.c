// 3) Tendo como entrada de dados o total vendido por um
// funcionário no mês, calcule a sua comissão e o salário bruto no
// mês. Para isso, considere um salário base de R$1.200,00 e
// comissão de 10% sobre o total vendido.

#include <stdio.h>
#include <stdlib.h>

int main() {
  float salarioBase = 1200;
  float comissao;
  float totalVendido;
  float taxaComissao = 10;
  float porcentagemComissao = (taxaComissao / 100);  // 10%
  float salarioBruto;

  printf("Diga quanto foi vendido pelo funcionário: ");
  scanf("%f", &totalVendido);

  comissao = totalVendido * porcentagemComissao;

  salarioBruto = salarioBase + comissao;

  printf("O salario bruto mensal desse funcionario é: %.2f", salarioBruto);
  printf("\n");

  return 0;
}
