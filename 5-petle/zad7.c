#include <stdio.h>
int main() {
float tablica[6];
int iloscDodatnich = 0;

for(int i=0; i<6; i++)
{
scanf("%f",&tablica[i]);
}

for(int i=0; i<6; i++)
{
if(tablica[i] > 0)
{
iloscDodatnich++;
}
}
printf("Ilosc dodatnich liczb: %d",iloscDodatnich);
return 0;
}