#include <stdio.h>
int main(void)
{
    int n;
    printf("Введите число");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\t%d\n", i, i*i);
        }
    }
    return 0;
}