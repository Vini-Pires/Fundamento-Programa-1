// 3) Faça um programa que tenha como entrada: o número de horas, minutos e segundos atuais, informe quantos segundos faltam para chegar terminar o dia.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int horas;
  int minutos;
  int segundos;
  int segundoLeft = 60;

  printf("Insira a hora atual incluindo os segundo (hh:mm:ss): ");
  scanf("%d:%d:%d", &horas, &minutos, &segundos);

  if (segundos > 60 || minutos > 60 || horas > 24) {
    printf(
        "Ao menos uma variável invalida:\n %d: horas\n %d: minutos\n %d: "
        "segundos\n",
        horas, minutos, segundos);
  } else {
    segundoLeft =
        (segundoLeft - segundos) + (60 * (60 - minutos + (60 * (24 - horas))));
    printf("Segundos faltando %d\n", segundoLeft);
  }

  return 0;
}
