//11д

#include <conio.h> 
#include <math.h>
#include "pch.h"
#include <stdio.h>
#include <iostream>

double x, y, z, a, b, c, pi = 3.1415926535;

int main( )
{

	printf("Input x:");
	scanf_s("%lf", &x);
	printf("Input y:");
	scanf_s("%lf", &y);
	printf("Input z:");
	scanf_s("%lf", &z);

	a = 2 * cos(x - pi / 6) / (1 / 2 + (sin(y)*sin(y)));
	b = 1 + z*z / (3 + z*z / 5);
	printf("a =%0.4lf\n  b =%0.4lf", a, b);

}
