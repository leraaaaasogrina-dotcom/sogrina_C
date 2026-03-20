#include <stdio.h>
int main(void)
{
    int n;
    printf("Введите число:");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        if (i % 4 == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}