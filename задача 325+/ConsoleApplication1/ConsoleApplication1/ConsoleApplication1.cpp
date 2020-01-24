// 325. Дано натуральное число n. Получить все простые делители этого числа.

#include <math.h>;
#include <stdlib.h>;
#include <conio.h>;
#include "pch.h"
#include <stdio.h>


int n, i, a, b;
int  main()
{

	puts("vvedite n:");
	scanf_s("%i", &n);
	printf("prostuy deliteli chisla %i:\n", n);
	for (i = 2; i <= (n / 2); i++)
	{
		if ((n%i) == 0)
		{
			b = 0;
			for (a = 2; a <= (i - 1); a++)
			{
				if ((i%a) == 0) b++;
			}
			if (b == 0) printf("%i\n", i);
		}
	}
	return 0;
}

