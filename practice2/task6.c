#include <stdio.h>
int main(void)
{
    int n;
    printf("Введите число:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(i * i > 50)
        {
            printf("%d ", i*i);
        }
    }
    return 0;
}