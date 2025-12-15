//6 2 12var
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<locale.h>
#include<math.h>


int main()
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
