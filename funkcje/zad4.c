#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char znaki[100];
	scanf("%s",znaki);

	int dlugosc = strlen(znaki);
	char znakiOdKonca[100];

	for (int i = 0; i < dlugosc; ++i)
	{
		znakiOdKonca[dlugosc-i-1] = znaki[i];
	}
	znakiOdKonca[dlugosc] =0;
	printf("%s\n", znakiOdKonca);
	return 0;
}	