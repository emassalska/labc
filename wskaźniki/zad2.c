#include <stdio.h>

int main () {
	int *wsk;
	int tab[2][2] = {12, 14, 16};
	wsk = tab[0];

for (int i = 0; i < 4; ++i)
{
	printf("%d\n", *(wsk+i));
}
return 0;
}
