//  1) Escreva um programa para determinar a quantidade de litros
// de combustível gastos em uma viagem por um automóvel que
// faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem
// é de 35 min e a velocidade média do automóvel é 80 km/h.

#include <stdio.h>
#include <stdlib.h>

int main() {
  float tempo, velocidade, litro;
  float tempo_horas, distancia;
  printf("\n tempo em minutos: ");
  scanf("%f", &tempo);
  printf("\n velocidade em km/h: ");
  scanf("%f", &velocidade);
  printf("\n");
  tempo_horas = tempo / 60;
  distancia = velocidade * tempo_horas;
  litro = distancia / 12;

  printf("\n");
  printf("A quantidade de litros: %.2f\n", litro);

  return 0;
}
