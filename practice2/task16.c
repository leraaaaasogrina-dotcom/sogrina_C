#include <stdio.h>
int main(void)
{
    int num;
    int count = 0;
    printf("Введите числа (0 - закончить): ");
    while(scanf("%d", &num)==1)
    {
        if (num == 0)
            break;
        if (num > 0)
           count++;
    }
    printf("Количество чисел: %d\n", count);
    return 0;
}