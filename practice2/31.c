#include <stdio.h>
int main()
{
    int n;
    int i, j;
    printf("Введи число");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("* ");
        }
         printf("\n");
    }
   
    return 0;
}