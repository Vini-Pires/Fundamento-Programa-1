// 2) Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distância entre os dois pontos no plano, através da seguinte fórmula:
// dist = sqrt( (x2-x1)² + (y2 - y1)² )

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float coordUmPontoX;
  float coordUmPontoY;
  float coordDoisPontoX;
  float coordDoisPontoY;
  float distancia;
  float potenciaDeYs;
  float potenciaDeXs;

  // Ponto 1 X
  printf("Insira o X do primeiro ponto\n");
  scanf("%f", &coordUmPontoX);
  // Ponto 1 Y
  printf("Insira o Y do primeiro ponto\n");
  scanf("%f", &coordUmPontoY);
  // Ponto 2 X
  printf("Insira o X do segundo ponto\n");
  scanf("%f", &coordDoisPontoX);
  // Ponto 2 Y
  printf("Insira o Y do segundo ponto\n");
  scanf("%f", &coordDoisPontoY);

  potenciaDeYs = pow(coordDoisPontoY - coordUmPontoY, 2);
  potenciaDeXs = pow(coordDoisPontoX - coordUmPontoX, 2);

  distancia = sqrt(potenciaDeXs + potenciaDeYs);

  printf("A distancia entre as coordenadas (%f,%f) ", coordUmPontoX, coordUmPontoY);
  printf("e as coordenadas (%f,%f) é: %f\n", coordDoisPontoX, coordDoisPontoY, distancia);

  return 0;
}
