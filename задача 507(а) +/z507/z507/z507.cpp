/*
507.

Сведения об ученике состоят из его имени и фамилии и названия класса (год обучения и буквы),
в котором он учится. Дан файл f, содержащий сведения об учениках школы.
	а) Выяснить, имеются ли в школе однофамильцы */

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include "pch.h"
# include <stdlib.h> 
#include <fstream> 
#include <ctime> 
	// определение убирающий символ '\n' с конца строки, если есть
#define obr(x) if((x[strlen(x)-1]=='\n'))x[strlen(x)-1]='\0';


int main(void)
{
	system("chcp 1251>0");

	const int len_max = 50;
	//const int false = 0;
	//const int true = 1;

	FILE* f;
	int i, i1, i2;
	char strFam1[len_max], strName1[len_max], strClass1[len_max];  // фамилия, имя, класс
	char strFam2[len_max], strName2[len_max], strClass2[len_max];  // фамилия, имя, класс
	int flag;

	// открытие файла на чтение
	if ((f = fopen("507_data.txt", "r")) == 0)
	{
		puts("Ошибка. Файл не найден.\n");
		system("pause");
		return EOF;
	}
	i1 = 0;
	while (!feof(f))
	{
		// считываем информацию о новом школьнике
		fgets(strFam1, len_max, f); obr(strFam1)
			fgets(strName1, len_max, f); obr(strName1)
			fgets(strClass1, len_max, f); obr(strClass1)
			i1++;

		// выяснить, была ли такая фамилия ранее
		fseek(f, 0, 0);
		i2 = 0;
		strFam2[0] = 0;  // присвоение пустой строки
		do {
			fgets(strFam2, len_max, f); obr(strFam2)
				fgets(strName2, len_max, f); obr(strName2)
				fgets(strClass2, len_max, f); obr(strClass2)
				i2++;
		} while (strcmp(strFam1, strFam2) != 0);  // Выйти из цикла, если уже была такая фамилия
		// Если ранее такая фамилия встречалась, то продолжить дальше читать
		if (i1 == i2)
		{
			// иначе ищем однофамильцев
			flag = false;  // Допустим, что однофамильцы не найдены.
			printf("Однофамильцы '%s %s, %s':\n", strFam1, strName1, strClass1);
			while (!feof(f))
			{
				fgets(strFam2, len_max, f); obr(strFam2)
					fgets(strName2, len_max, f); obr(strName2)
					fgets(strClass2, len_max, f); obr(strClass2)

					// Если однофамилец, ...
					if (strcmp(strFam1, strFam2) == 0)
					{
						flag = true;  // Однофамилец найден.
						printf("%s, %s\n", strName2, strClass2);
					}
			}
			// Если однофамилец не найден, то вывести соответствующее сообщение.
			if (!flag)
				printf("Нет.\n");
			printf("\n");
		}
		// передвинуть указатель на место '1'
		fseek(f, 0, 0);
		i2 = 0;
		do {
			fgets(strFam2, len_max, f);
			fgets(strName2, len_max, f);
			fgets(strClass2, len_max, f);
			i2++;
		} while (i1 != i2);
	}
	printf("---------------------\n");
	printf("Конец выполнения программы.\n");
	system("pause");

	return 0;
}