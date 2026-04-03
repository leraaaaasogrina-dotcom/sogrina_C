#include <stdio.h>

int square(int a)
{
    int c = a * a;
    return c;
}

int main()
{
    int x = 5;
    int result = square(x);
    printf("%d\n",result);
    return 0;
}