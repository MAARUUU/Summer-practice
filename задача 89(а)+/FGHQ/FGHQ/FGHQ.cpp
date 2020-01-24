//89 а


#include "pch.h"
#include <stdio.h>
#include <math.h>

int n, m, a, b;

int main()
{
	printf("Input n:");
	scanf_s("%d", &n);
	printf("Input m:");
	scanf_s("%d", &m);

	a == n;
	b == m;

	while ((n != 0)&&(m != 0)) {
		if (n > m) n = n % m;
		else m = m % n;
		
		printf("NOD=%d\n", n + m);

	}
	return 0;
	
}
