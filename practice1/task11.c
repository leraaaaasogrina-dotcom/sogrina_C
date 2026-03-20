#include <stdio.h>
int main(void)
{
    int n;
    printf("Введите число:");
    scanf("%d", &n);
    if (n%2 == 0) printf("Число четное");
    else printf("Число не четное");
    return 0;
}