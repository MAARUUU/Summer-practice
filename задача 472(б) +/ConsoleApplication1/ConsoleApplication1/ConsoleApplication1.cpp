/*472(б)

Дан файл f, компоненты которого являются действительными числами. Найти:
    б) наименьшее из значений компонент с четными номерами;


*/

#define _CRT_SECURE_NO_WARNINGS 
# include <stdio.h> 
# include <stdlib.h> 
#include <iostream> 
#include <fstream> 
#include <ctime> 

int main()

{
	FILE *f;
	int N;
	int i;
	int min_chetnoe = 1000, number;


	f = fopen("out.txt", "w");
	printf("Enter N: ");
	scanf("%d", &N);


	for (i = 1; i <= N; i++)
	{
		printf("Enter next number: ");
		scanf_s("%d", &number);
		fprintf(f, "%d\n", number);
	}
	fclose(f);

	f = fopen("out.txt", "r");
	while (!feof(f))
	{
		fscanf(f, "%d", &number);
		if (number % 2 == 0) {
			if (number < min_chetnoe) min_chetnoe = number;
		}
	}
	printf(" %d", min_chetnoe);
	fclose(f);
}