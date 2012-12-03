#include <math.h>
#include <stdio.h>  

double silnia(double n)
{
   if(n == 0) return 1;
   return silnia(n-1)*n;
}
int main(int argc, char const *argv[])
{
	double wynik[10];
	wynik[0] = silnia(2);
	wynik[1] = silnia(3);
	wynik[2] = silnia(5);
	wynik[3] = silnia(7);
	wynik[4] = silnia(11);
	wynik[5] = silnia(13);
	wynik[6] = silnia(17);
	wynik[7] = silnia(19);
	wynik[8] = silnia(23);
	wynik[9] = silnia(29);
	for (int i = 0; i < 10; ++i)
	{
		printf("%.0f\n", wynik[i]);
	}
	return 0;
}