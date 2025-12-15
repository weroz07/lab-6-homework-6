//6 1
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<locale.h>

int year;

int main()
{
	setlocale(LC_ALL, "RUS");
	puts("Введите год");
	scanf("%d", &year );

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		
		printf("Год %d высокосный", year);

	} else {

		printf("Год %d не высокосный", year);
	
	}

	return 0;
	
}
