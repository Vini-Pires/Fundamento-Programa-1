// 5) Faça um programa que receba uma frase e depois exiba quantas vezes
// cada vogal aparece. Ele deve contar considerando o tamanho da String.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char frase[50];
  int vogal_a = 0;
  int vogal_e = 0;
  int vogal_i = 0;
  int vogal_o = 0;
  int vogal_u = 0;
  int total_vogais = 0;
  int tamanhoFrase;

  printf("Insira uma frase: ");
  fgets(frase, 50, stdin);
  frase[strcspn(frase, "\n")]="\0";
  setbuf(stdin, NULL);

  tamanhoFrase = strlen(frase);

  for (int i = 0; i < tamanhoFrase; i++) {
    if (((frase[i] == 'a' || frase[i] == 'e') ||
         (frase[i] == 'i' || frase[i] == 'o')) ||
        frase[i] == 'u') {
      total_vogais++;
      if (frase[i] == 'a') {
        vogal_a++;
      } else if (frase[i] == 'e') {
        vogal_e++;
      } else if (frase[i] == 'i') {
        vogal_i++;
      } else if (frase[i] == 'o') {
        vogal_o++;
      } else {
        vogal_u++;
      }
    }
  }

  printf("Essa frase tem %d vogais (a: %d, e: %d, i: %d, o: %d, u: %d)\n", total_vogais, vogal_a, vogal_e, vogal_i, vogal_o, vogal_u);

  return 0;
}
