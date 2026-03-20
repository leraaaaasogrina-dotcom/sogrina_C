#include <stdio.h>
int main(void)
{
    int n;
    int count = 0;
    printf("Введите число:");
    scanf("%d", &n);
    for(int i = 1; i<= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    printf("Количество=%d", count);
    return 0;
}