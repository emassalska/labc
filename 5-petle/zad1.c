// pętle: zadanie 2

#include <stdio.h>

int main() {
  printf("kolejne potęgi liczby 2 nie przekraczające 2010:\n");

  int x = 1;
  while (x <= 2010) {
    printf("%d", x);
    x *= 2;
    if (x <= 2010)
      printf(", ");
  }
  printf("\n");
}
