#include <stdio.h>
int main(void)
{
    for(int i=1; i<=100; i++)
    {
        if( i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBill");
        }
         else if (i %3 == 0 && i % 5==1)
        {
            printf("Fizz");
        }
    }
    return 0;
}