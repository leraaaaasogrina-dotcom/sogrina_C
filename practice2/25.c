#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Введи число");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
        {sum++;}
    }
    printf("Сумма%d\n", sum);
    return 0;
}