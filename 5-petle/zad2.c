// pętle: zadanie 2
// program wypisuje taką szachownicę
//
//* * * * * * * *
// * * * * * * * *
//* * * * * * * *
// * * * * * * * *
//* * * * * * * *
// * * * * * * * *
//* * * * * * * *
// * * * * * * * *

#include <stdio.h>

void gwiazdki1(void);
void gwiazdki2(void);

int main() {
  for(int i = 0; i < 4; i++) {
    gwiazdki1();
    gwiazdki2();
  }
}

void gwiazdki1() {
  for(int i = 0; i < 8; i++) {
    printf("* ");
  }
  printf("\n");
}

void gwiazdki2() {
  for(int i = 0; i < 8; i++) {
    printf(" *");
  }
  printf("\n");
}
