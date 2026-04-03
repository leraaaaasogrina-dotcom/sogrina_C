#include <stdio.h>
int fact(int n)
{
    int sum = 1;
    int i;
   for(i=1; i<=n; i++)
   {
     sum *=i;
   }
   return sum;
}
int main()
{
    int n;
    printf("введите число");
    scanf("%d", &n);
    printf("%d\n", fact(n));
    return 0;
}