#include <stdio.h>
int main(void)
{
    int n, num;
    int max = -1000000;

    while (1)
    {

     printf("Сколько чисел: ");
     scanf("%d", &n);

     printf("Введите число (0 - закончить): ");
     scanf("%d", &num);

        if (num == 0)
            break;

        if (num > max)

            max=num;
    
        printf("Максимальное число: %d\n", max);
    }
    return 0;
}