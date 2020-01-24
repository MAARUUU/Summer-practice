/*
431.
Даны действительные числа s, t. Получить результат формул.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include "pch.h"
# include <stdlib.h> 
#include <fstream> 
#include <ctime> 


float max(float a, float b)
{
	if (a < b) return b;
	return a;
}

float h(float a, float b)
{
	return a / (1 + b * b) + b / (1 + a * a) - pow(a - b, 3);
}

int main(void)
{
	float s, t;

	// ввод данных
	printf("s="); scanf_s("%f", &s);
	printf("t="); scanf_s("%f", &t);

	// вычисление
	float result = h(s, t) + max(pow(h(s - t, s*t), 2), pow(h(s - t, s + t), 4)) + h(1, 1);

	// вывод результата
	printf("\nResult: %.2f\n", result);

	printf("\n");
	system("pause");
	return 0;
}
