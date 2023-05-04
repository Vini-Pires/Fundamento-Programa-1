#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0;

  while (i < 10) {
    i++;
    if (i == 5) {
      break;  // dessa forma ele chega no 5 e simplesmente sai do loop
    }
    printf("Num: %d\n", i);
  }

  return 0;
}

/*
--- Terminal ---
Num: 1
Num: 2
Num: 3
Num: 4
*/
