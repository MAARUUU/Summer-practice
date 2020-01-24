//201 ж.  Даны натуральное число n, действительные числа a1,...,an.
// Получить: max (-a1,a2,-a3,...,(-1)nan)

#include <iostream>
#include <math.h>
#include <conio.h>
#include "pch.h"
#include <stdio.h>

const int n = 10;
int ar[n],a, i, max=ar[0];

int main()
{
	for (i = 0; i < n; i++)
	{
		printf("ar[%d] = ", i);
		scanf_s("%d", &ar[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0) printf("%d   ", ar[i]);
		else
			printf("%d   ", ar[i]*(-1));
			
	}

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0) ar[i]=ar[i];
		else
			ar[i] = ar[i] * (-1);
	}

		  for (int i = 0; i < n; i++) 
		   {
			if (ar[i] > max) 
			{
				max = ar[i];
			}
		  }
	
		printf("max=%d", max);
	return 0;
}
