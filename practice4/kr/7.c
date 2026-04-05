#include <stdio.h>
int sum_to_n(int n)
{
    int sum = 0;
    int i;
   for(i=1; i<=n; i++)
   {
     sum +=i;
   }
   return sum;
}
int main()
{
    int n;
    printf("введите число");
    scanf("%d", &n);
    printf("%d\n", sum_to_n(n));
    return 0;
}