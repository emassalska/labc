// pętle: zadanie 2
// program wypisuje szachownicę z gwiazdek

#include <stdio.h>

void gwiazdki(char *szablon);

int main() {
  for(int i = 0; i < 4; i++) {
    gwiazdki("* ");
    gwiazdki(" *");
  }
}

void gwiazdki(char *szablon) {
  for(int i = 0; i < 8; i++) {
    printf("%s", szablon);
  }
  printf("\n");
}
