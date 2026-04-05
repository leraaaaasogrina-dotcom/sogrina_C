#include <stdio.h>
int main(void)
{
   int a;
   printf("Введите число:");
   scanf("%d", &a);
   if(a%2 == 0 && a%3 == 0) printf("Число делится на 2 и 3");
   else printf("Число не делится");
    return 0;
}