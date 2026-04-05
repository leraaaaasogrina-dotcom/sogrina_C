#include <stdio.h>
int main(void) 
{
    int n, num;
    int count = 0;
    int i = 0;

    printf("Сколько чисел: ");
    scanf("%d", &n);

    printf("Введите числа через пробел: ");

    while (i < n)
    {
        scanf("%d", &num);

        if (num < 0)
        {
            count++;
        }

        i++;
    }

    printf("Отрицательных чисел: %d\n", count);

    return 0;
}