
//6 3
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int chas, min;
    double chas_ugol, min_ugol, raz, otvet;

    printf("Введи часы: ");
    scanf("%d", &chas);

    printf("Введи минуты: ");
    scanf("%d", &min);

    // Вычисляем углы
    chas_ugol = chas * 30 + min * 0.5;
    min_ugol = min * 6;

    // Находим разницу
    raz = min_ugol - chas_ugol;

    // Если минутная стрелка "позади" часовой
    if (raz < 0) {
        raz = raz + 360;
    }

    // Скорость сближения 5.5 градусов в минуту
    otvet = raz / 5.5;

    printf("\nРезультат: %.1f минут\n", otvet);

    return 0;
}