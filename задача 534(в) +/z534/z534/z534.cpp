#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include "pch.h"
# include <stdlib.h> 
#include <fstream> 
#include <ctime> 

struct list
{
	int a;
	list* next;
};

int n = 0, k1 = 1, w = 0, k = 0, min = 0;


int main()
{
	setlocale(LC_ALL, "Russian");
	list* head;
	int str = 0;
	list* spis = new list;


	printf("Введите n ");
	scanf_s("%d", &n);
	printf("Элемент: ");
	scanf_s("%d", &w);

	spis->a = w;
	spis->next = NULL;
	head = spis;
	for (int i = 1; i < 2 * n; i++)
	{
		spis->next = new list;
		printf("Элемент: ");
		scanf_s("%d", &str);
		spis->next->a = str;
		spis->next->next = NULL;
		spis = spis->next;
	}


	printf("\n\n");
	spis = head;
	list* spis1 = new list;
	for (int i = 1; i <= n; i++) {
		spis1 = spis->next;
		spis = spis->next;
	}
	spis = head;
	k1 = 1;


	while (spis1 != NULL) {
		k = (spis->a + spis1->a);
		if (k1 == 1) min = k;
		if (k < min) min = k;
		k1 = 0;
		spis1 = spis1->next;
		spis = spis->next;
	}

	printf("%d", min);
}