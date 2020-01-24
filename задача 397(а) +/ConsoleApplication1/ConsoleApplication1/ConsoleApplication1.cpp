//397(a)  Даны натуральное число n, целые числа a1,..., a25, b1,..., bn. Среди a1,..., a25 нет повторяющихся чисел, нет их и среди b1,..., bn.
//Верно ли, что все члены последовательности a1,..., a25 входят в последовательность b1,..., bn?

#include <iostream>
#include <math.h>
#include <conio.h>
#include "pch.h"
#include <stdio.h>
#include <stdlib.h>



const int n = 10;
int ar[15], ar2[n], a, i, j = 0, k = 0, x;

int main()
{
	for (i = 0; i <= 15 - 1; i++)
	{
		printf("ar[%d] = ", i);
		scanf_s("%d", &ar[i]);
		//ar[i] = i;
	}
	for (i = 0; i <= n - 1; i++)
	{
		printf("ar2[%d] = ", i);
		scanf_s("%d", &ar2[i]);
		//ar2[i] = i + 8;
	}

	if (n < 14)
	{
		for (int i = 0; i <= 14; i++)
		{
			if (ar[i] == ar2[0])
			{
				x = i;
				break;
			}
		}

		if (14 - x > n)
		{
			k = 1;
			for (int i = x; i <= 14; i++)
			{
				if (ar[i] != ar2[j])
				{
					k = 0;
					break;
				}

				if (j != n - 1)
					j++;
				else
					break;

			}
		}
	}

	if (k == 1)
		printf("posledovatel'nost' vxodit \n");
	else
		printf("posledovatel'nost' ne vxodit \n");

	system("pause");
}