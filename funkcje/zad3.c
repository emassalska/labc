#include <stdbool.h>
#include <math.h>
#include <stdio.h>

bool czyDoskonala (int n)
{
	int suma = 0;
	for (int i = 1; i < n; ++i)
	{
		if (n%i==0)
		{
			 suma += i;
		}
	}
	if ( suma == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main(int argc, char const *argv[])
{
	for (int i = 1; i < 1000; ++i)
	{
		bool wynik = czyDoskonala(i);
		if (wynik)
		{
			printf("liczba %i jest doskonala\n",i);
		}
	}
	return 0;
}
