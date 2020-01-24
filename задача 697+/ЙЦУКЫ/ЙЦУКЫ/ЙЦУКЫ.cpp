//697.  Найти произведение двух матриц размеров m*n и n*k
//

#define _CRT_SECURE_NO_WARNINGS
#include <conio.h> 
#include "pch.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

const int k = 3, m = 4, l = 3;
int a[k][m], b[m][l], i, j, f, proizvedenie[m][m];

int main()
{
	for (i = 1; i < k; i++)
		for (j = 1; j < m; j++)
		{
			printf("A[%d][%d]=", i, j);
			scanf_s("%d", &a[i][j]);
		}
	printf("\n");
	for (i = 1; i < m; i++)
		for (j = 1; j < l; j++)
		{
			printf("b[%d][%d]=", i, j);
			scanf_s("%d", &b[i][j]);
		}
	for (i = 1; i < k; i++)
		for (j = 1; j < l; j++)
		{
			proizvedenie[i][j] = a[i][1] * b[1][j];
			for (f = 2; f < m; f++)
				proizvedenie[i][j] = proizvedenie[i][j] + a[i][f] * b[f][j];
		}
	printf("\n");
	printf("\n");
	printf("Matricu C=A*B:");
	for (i = 1; i < k; i++)
	{
		printf("\n");
		for (j = 1; j < l; j++)
		{
			printf("[%d][%d]=%d     ", i + 1, j + 1, proizvedenie[i][j]);
		}

	}
	scanf_s("%d", &a[i][j]);
}