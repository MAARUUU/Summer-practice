//76 б


#include "pch.h"
#include <stdio.h>
#include <math.h>

double k, l, m, n;

int main()
{
	printf("Input k:");
	scanf_s("%lf", &k);
	printf("Input l:");
	scanf_s("%lf", &l);
	printf("Input m:");
	scanf_s("%lf", &m);
	printf("Input n:");
	scanf_s("%lf", &n);

	if ((k - l == m - n) || (k == m) || (l == n) || (k + l == m + n))

		printf("DANGER");
	else
		printf("No danger");
	return 0;
}
