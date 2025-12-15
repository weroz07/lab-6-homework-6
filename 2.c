//6 2
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define p 2.6

double x;
float y, a, b;
int a1, b1, c;
void main()
{
    setlocale(LC_ALL, "RUS");
    puts("Введите параметр X:");
    scanf("%e", &x);
    a = powf(p, 3) + pow(x, 3);
    b = expf(powf((p + x), 0.5));
    y = powf(b, 3) / powf(a, 2);
    printf("Результат: %.2f\n", y);
    a1 = (int)a;
    b1 = (int)b;
    c = (int)y;
    printf("a = %d, b = %d, c = %d\n", a1, b1, c);
    
}
