#include <stdio.h>
int main()
{
    int n;
    
    //int i;
    printf("Введи число");
    scanf("%d", &n);
    int i;
    for(i=1; i<=n; i++)
    {
        int sum = 0;
        int temp = i;
        while(temp > 0)
        {
            
            sum += temp % 10;
            temp /= 10;
        }
         if(sum > 10)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}