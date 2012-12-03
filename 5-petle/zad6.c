#include <stdio.h>
int main() {
float tablica[6];
float max, min;

for(int i=0; i<6; i++)
{
scanf("%f",&tablica[i]);
}
//wartosci startowe
max = tablica[0];
min = tablica[0];

for(int i=1; i<6; i++)
{
if(max<tablica[i])
{
max = tablica[i];
}

if(min>tablica[i])
{
min = tablica[i];
}
}
printf("max: %f min: %f",max,min);
return 0;
}