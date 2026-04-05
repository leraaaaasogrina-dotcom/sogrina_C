#include <stdio.h>
int main(void)
{
    int n;
    int sum = 0;
    printf("Введите число:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
    }
    printf("Сумма нечетных чисел: %d", sum);
    return 0;
}