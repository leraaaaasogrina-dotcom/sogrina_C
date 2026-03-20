#include <stdio.h>
int main(void)
{
    int n;
    printf("Введите число-");
    scanf("%d", &n);
    if(n<=1)
    {
        printf("Число не простое\n");
        return 0;
    }
    for(int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("Число не простое\n");
            return 0;
        }
        
    }
    printf("Число простое\n");
    return 0;
    
}