#include <stdio.h>
#include <math.h>

void podaj_liczbe(char *prompt, double *x);

int main() {
  double a, b;

  podaj_liczbe("podaj liczbę: ", &a);
  b = sqrt(a);
  printf("pierwiastek z %lf to %lf\n", a, b);

  return 0;
}

void podaj_liczbe(char *prompt, double *x) {
  printf(prompt);
  scanf("%lf", x);
}
