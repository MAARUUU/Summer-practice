/*
683.
Назовём допустимым преобразованием матрицы перестановку двух строк или двух столбцов.
Дана действительная квадратная матрица порядка n. С помощью допустимых преобразований
добиться того, чтобы
	а) один из элементов матрицы, обладающий наибольшим по модулю значением, распологался
	   в левом верхнем углу матрицы.
*/


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "pch.h"
# include <stdlib.h> 
#include <fstream> 
#include <ctime> 
#include <stdio.h>
#include <math.h>

// процедура перестановки строк a и b
void swap_rows(float **matr, int m, int n, int a, int b)
{
	int i;
	for (i = 0; i < n; i++)
	{
		float temp = matr[a][i];
		matr[a][i] = matr[b][i];
		matr[b][i] = temp;
	}
}

// процедура перестановки столбцов a и b
void swap_cols(float **matr, int m, int n, int a, int b)
{
	int j;
	for (j = 0; j < n; j++)
	{
		float temp = matr[j][a];
		matr[j][a] = matr[j][b];
		matr[j][b] = temp;
	}
}

int main(void)
{
	float **matrix;  
	float m, n;  
	int j_max, i_max;  
	int j, i;


	printf("m="); scanf_s("%f", &m);
	printf("n="); scanf_s("%f", &n);
	matrix = (float**)malloc(m * sizeof(float*));
	for (j = 0; j < m; j++)
	{
		matrix[j] = (float*)malloc(n * sizeof(float));
		for (i = 0; i < n; i++)
		{
			printf("matrix[%d][%d]=", j, i);
			scanf_s("%f", &(matrix[j][i]));
		}
	}

	
	printf("\nMatrix source:\n");
	for (j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
			printf("%7.2f", matrix[j][i]);
		printf("\n");
	}

	// поиск максимального по модулю элемента
	for (j = 0; j < m; j++)
		for (i = 0; i < n; i++)
			if (((j == 0) && (i == 0)) || (abs(matrix[j][i]) > abs(matrix[j_max][i_max])))
			{
				j_max = j;
				i_max = i;
			}
	swap_rows(matrix, m, n, 0, j_max);
	swap_cols(matrix, m, n, 0, i_max);

	printf("\nIndex element maximum:\n");
	printf("row=%d\n", j_max);
	printf("col=%d\n", i_max);
	
	printf("\nMatrix result:\n");
	for (j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
			printf("%7.2f", matrix[j][i]);
		printf("\n");
	}

	printf("\n");
	system("pause");

	// уничтожение матрицы
	for (j = 0; j < m; j++)
		free(matrix[j]);
	free(matrix);

	return 0;
}
