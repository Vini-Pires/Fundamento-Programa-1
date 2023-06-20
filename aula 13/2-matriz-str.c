#include <stdio.h>
#include <stdlib.h>
#include <string.h> // usar essa lib sempre que usar uma função de string's

int main() {

  char nomes[3][21];
  char text[] = "Insira o nome: ";

  for (int i = 0; i < 3; i++){
    printf("Insira o nome %d: ", i+1);
    fgets(nomes[i], 20, stdin);
    nomes[i][strcspn(nomes[i], "\n")] = "\0";
    setbuf(stdin, NULL);
  }

  for (int i = 0; i < 3; i++) {
    printf("%s\n",nomes[i]);
  }

  return 0;
}
