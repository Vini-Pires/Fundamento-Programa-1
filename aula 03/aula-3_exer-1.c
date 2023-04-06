/*
1) Elabore um programa que exiba o seu nome na primeira
linha e o seu e-mail segunda. Em seguida, exiba uma
mensagem solicitando para o usuário pressionar uma tecla.
Quando o usuário pressionar, exiba em uma nova linha o nome
do seu amigo e, em outra, o e-mail dele.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("\nVinícius de A B Pires\n");
  printf("viniciuspires@alunos.utfpr.edu.br\n");
  printf("\nPressione uma tecla para continuar...\n");

  getchar(); // ele para o código exigindo um carácter especifico, qnd nada é especificado ele aceita qq tecla no windows, ja no linux somente segue com "Enter"

  printf("Neo Matrix\n");
  printf("neo@matriz.com\n");

  printf("\n");
  return 0;
}
