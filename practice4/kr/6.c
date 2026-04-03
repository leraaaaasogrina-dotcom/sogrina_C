#include <stdio.h>
void print_1_to_n(int n)
{
   for(int i=1; i<=n; i++)
   {
    printf("%d", i);
   }
   return;
}
int main()
{
    int n;
    printf("введите число");
    scanf("%d", &n);
    print_1_to_n(n);
    return 0;
    
}