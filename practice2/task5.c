#include <stdio.h>
int main(void)
{
    int n;
    int count = 0;
    printf("Введите число:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            count++;
        }
    }
    printf("%d ", count);
    return 0;
}