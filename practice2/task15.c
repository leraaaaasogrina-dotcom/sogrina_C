#include <stdio.h>
int main(void)
{
    int num;
    int min = 1000000;

    while (1)
    {

    //printf("Сколько чисел: ");
    //scanf("%d", &n);

    printf("Введите число (0 - закончить): ");
    scanf("%d", &num);

        if (num == 0)
            break;

        if (num < min && num % 2 == 0) 
            min = num;
    }
    printf("Минимальное четное число: %d\n", min);

    return 0;
}