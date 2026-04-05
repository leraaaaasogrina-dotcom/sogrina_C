#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("Введите число:");
    scanf("%d", &a);
    printf("Введите число:");
    scanf("%d", &b);
    printf("Введите число:");
    scanf("%d", &c);
    if(a>=b && a>=c) printf("%d\n", a);
    else if(b>=a && b>=c) printf("%d\n", b);
    else printf("%d\n", c);
    return 0;
}