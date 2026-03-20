#include <stdio.h>
int main(void)
{
    int n;
    long long fact = 1;
    printf("Введите число");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            fact = fact * i;
        }
    }
    printf("Факториал:%d = %lld\n", n, fact);
    return 0;
}