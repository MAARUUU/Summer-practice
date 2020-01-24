//846 д
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include "pch.h"
# include <stdlib.h> 
#include <fstream> 
#include <ctime> 
#include<locale.h>
#include<windows.h>
#include "pch.h"



int x = 300, y = 150;

void MakeSM(POINT p, HDC hdc)
{
	for (int i = 0; i != 600; i += 15)
	{
		MoveToEx(hdc, i, 145, &p);
		LineTo(hdc, i, 155);
	}

	for (int i = 0; i != 300; i += 15)
	{
		MoveToEx(hdc, 295, i, &p);
		LineTo(hdc, 305, i);
	}
}

void MakeXOY(POINT p, HDC hdc)
{
	MoveToEx(hdc, x, 0, &p);
	LineTo(hdc, x, x);
	MoveToEx(hdc, 0, y, &p);
	LineTo(hdc, 2 * x, y);
}

float function(float x)
{
	if ((3*x * x + 2 * x + 1) == 0) return 0;
	return 100 * (1 / (3*x * x + 2.0 * x + 1));
}

int main()
{
	setlocale(0, "");

	HWND hwnd = GetConsoleWindow();
	HDC hdc = GetDC(hwnd);
	SelectObject(hdc, GetStockObject(WHITE_PEN));

	POINT p;


	MoveToEx(hdc, 300, 150, &p);
	for (int i = 0; i != 300; i++)
	{
		if (!function(i / 100.0)) continue;
		LineTo(hdc, i + x, y - function(i / 100.0));
		MoveToEx(hdc, i + x, y - function(i / 100.0), &p);
	}

	MoveToEx(hdc, 300, 150, &p);
	for (int i = 0; i != 300; i++)
	{
		if (!function(i / 100.0)) continue;
		LineTo(hdc, x - i, y - function(i / 100.0));
		MoveToEx(hdc, x - i, y - function(i / 100.0), &p);
	}

	MakeXOY(p, hdc); //Координатная плоскость
	MakeSM(p, hdc); //Отрезки

	system("pause");
}