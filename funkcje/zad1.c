#include <math.h>
#include <stdio.h>  
double przeciwprostokatna(double a, double b)
{
	double temp;
	double c;
	temp= pow(a,2) + pow(b,2);
	c= sqrt(temp);
	return c;
}
int main(int argc, char const *argv[])
{
	double wynik[3];
	wynik[0] = przeciwprostokatna(3.0,4.0);
	wynik[1] = przeciwprostokatna(5.0,5.0);
	wynik[2] = przeciwprostokatna(1.0,6.0);
	printf("3.0*4.0=%f\n", wynik[0]);
	printf("5.0*5.0=%f\n", wynik[1]);
	printf("1.0*6.0=%f\n", wynik[2]);
	return 0;
}