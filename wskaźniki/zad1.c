#include <stdio.h>

int main () {
  int ref[] = {8, 4, 0, 2};
  int *wsk;
  int indeks;

  for (indeks = 0, wsk = ref; indeks < 4; indeks++, wsk++)
    printf("%d %d\n", ref[indeks], *wsk);
}

/* Ile elementów ma tablica ref? odp :4 Czego adresem jest ref?odp: 1 el. tab. a ref+1? odp:2 elem. tab Na co wskazuje ++ref? odp:2 el. tab. */
