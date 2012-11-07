#include <stdio.h>
int main() {
int tablica[6];

for(int i=0; i<6; i++)
{
scanf("%d",&tablica[i]);
}

for(int i=0; i<6; i++)
{
printf("%d ",tablica[i]);
}
printf("\n"); //nowa linia zeby oddzielic wyniki
for(int i=5; i>=0; i--)
{
printf("%d ",tablica[i]);
}
return 0;
}
