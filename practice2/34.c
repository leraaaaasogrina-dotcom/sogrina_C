#include <stdio.h>
int main()
{
    //int n;
    int i, h, j;
    printf("Введи число");
    scanf("%d", &h);
    for(i=1; i<=h; ++i)
    {
        for (j=1; j<=i; ++j)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}