// 2) Uma conta de caderneta de poupança foi aberta com um
// depósito de R$ 500,00. Imagine que esta conta é remunerada
// em 1% de juros ao mês. Qual será o valor da conta após três
// meses?

// Para calcular potência, deve-se colocar a biblioteca #include <math.h>
// no começo do arquivo, e usar a função pow. Exemplo:
// variavel = pow(base,expoente);

// M = C (1+i)^t

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float montante, capital, base, tempo;
  float taxa_juros;
  float juros;
  scanf("%f", &taxa_juros);
  base = 1 + (taxa_juros / 100);
  scanf("%f", &tempo);
  juros = pow(base, tempo);
  scanf("%f", &capital);
  montante = capital * juros;

  printf("montante: %.2f\n", montante);

  return 0;
}

// gcc -Wall -o ./output/exerc-2 aula-05_exec-2.c -lm
// ./output/exerc-2
//  Foi necessário executar o arquivo com a linha de comando acima pois a linguagem c parece ter algum problema mental pra resolver potencia pelo compilador automático (F6)
