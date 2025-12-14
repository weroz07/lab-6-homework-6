//6 1
//#define _CRT_SECURE_NO_DEPRECATE
//#include<stdio.h>
//#include<locale.h>
//
//int year;
//
//main()
//{
//	setlocale(LC_ALL, "RUS");
//	puts("Введите год");
//	scanf("%d", &year);
//
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
//
//		printf("Год %d высокосный", year);
//
//	}
//	else {
//
//		printf("Год %d не высокосный", year);
//
//	}
//
//	return 0;
//
//}


//6 2
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<locale.h>
#include<math.h>


main()
{
	double x, F1, F2;

	setlocale(LC_ALL, "RUS");

	puts("Введите число x");
	scanf("%lf", &x);
	F1 = -1 * pow(x, 2) + x - 9;
	F2 = 1 / (pow(x, 4) - 6);
	printf("%.2lf", x >= 8 ? F1 : F2);


	return 0;

}