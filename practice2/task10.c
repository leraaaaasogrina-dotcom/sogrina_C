#include <stdio.h>
int main(void)
{
    int n;
    int proiz = 1;
    printf("Введите число:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            proiz *= i;
        }
    }
    printf("Произведение чисел, кратных 3: %d", proiz);
    return 0;
}