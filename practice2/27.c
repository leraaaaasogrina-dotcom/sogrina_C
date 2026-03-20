#include <stdio.h>
int main()
{
    int n;
    printf("Введи число");
    scanf("%d", &n);
    int i;
    for(i=1; i<=n; i++)
    {
        if (i % 17 == 0)
        break;
    }
    if(i <= n){
    printf("первое число делящееся на 17=%d", i);}
    return 0;
}