#include <stdio.h>
int main() {
int n; 
scanf("%d", &n);
if(n<1)
{
printf("Liczba jest mnijesza od 1");
return 0; //koniec programu
}
int suma;
suma = 0;
for(int i = 1; i<=n; i++)
{
suma = suma +i;
}
printf("%d", suma);
return 0;
}
