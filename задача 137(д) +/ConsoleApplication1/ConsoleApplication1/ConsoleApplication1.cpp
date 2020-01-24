/*  137(д).
Даны натуральное число n, действительные числа а1,..., an. Вычислить:
      -a1, a2, -a3, ..., (-1)nan;
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include "pch.h"
#include <stdlib.h> 
#include <fstream> 
#include <ctime> 

struct info // Структура хранящая данные
{
	int data;
};
struct List // Описание структуры 
{
	struct info a;
	struct List *next;
};

void Add_List(struct List **head, int n) 
{
	struct List *tail;
	int i;
	(*head) = NULL;
	(*head) = (struct List *)malloc(sizeof(struct List));
	(*head)->next = NULL;
	tail = (*head);

	for (i = 1; i <= n; i++)
	{
		printf("Введите число : ");
		scanf_s("%d", &tail->a.data);
		tail->next = (struct List *)malloc(sizeof(struct List));
		tail = tail->next;
		tail->next = NULL;	
	} 
}

void Print_List(struct List *b) 
{
	struct List *print = b;
	printf("Список :\n");
	while (print->next != NULL)
	{
		printf("%d   ", print->a.data);
		print = print->next;
	}
}

void List(struct List *b, int n)
{
	struct List *print = b;
	int i;
	printf("Результат :\n");
	while (print->next != NULL) {
	for (i = 1; i < n; i++)
	{
		if (i % 2 == 0) printf("%d   ", print->a.data);
		else printf("%d   ", print->a.data*(-1));
		print = print->next;
	}
}
}



int main()
{
	setlocale(LC_ALL, "Rus");
	struct List* begin = NULL;
	int sum, n;

	printf("\n Vvedite n ");
	scanf_s("%d", &n);
	Add_List(&begin,n);
	Print_List(begin);
	printf("\n");
	List(begin,n);
	return 0;

	scanf_s("%d", &n);
}