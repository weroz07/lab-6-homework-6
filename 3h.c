//6 3 20var
#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int h, m;
    double ugol_chas, ugol_min;
    double raz, res;

    printf("Часы (0-12): ");
    scanf("%d", &h);

    printf("Минуты (0-59): ");
    scanf("%d", &m);

    ugol_chas = h * 30 + m * 0.5;

    ugol_min = m * 6;

    // Разница углов
    raz = ugol_min - ugol_chas;

    // Если разница отрицательная
    if (raz < 0) {
        raz = raz + 360;
    }

    // Выч вр до встр
    res = raz / 5.5;

    printf("\nПри времени %d:%d\n", h, m);
    printf("Стрелки совпадут через %.1f минут\n", res);

    return 0;
}
