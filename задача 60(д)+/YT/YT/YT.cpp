//60д

#include <conio.h> 
#include <math.h>
#include "pch.h"
#include <stdio.h>
#include <iostream>

double  u, x, y;

int main()
{

	printf("Input x:");
	scanf_s("%lf", &x);
	printf("Input y:");
	scanf_s("%lf", &y);

	if (( (y*y) + (x*x)<=1)  && (y > 0) &&( x >= y))
	{
		u = sqrt((x*x) - 1);
	}
	else
	{
		u = x + y;
	}
	printf(" u =%0.2lf", u);

	scanf_s("%lf", &y);

}
