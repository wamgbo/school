#include <stdio.h>
#include <stdlib.h>
double *f_to_c(double c);
int main()
{
	double c = 30, *fptr;
	fptr = (double*)f_to_c(c);
	double f = *fptr;
	printf("f=%f\n", f);
	system("pause");
	return 0;
}
double *f_to_c(double c)
{
	double* f;
	f = (double*)malloc(sizeof(double));
	*f= (double)9 / 5 * c + 32;
	return f;
}
