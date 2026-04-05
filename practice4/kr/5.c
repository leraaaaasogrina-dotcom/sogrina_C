#include <stdio.h>
int max3(int a, int b, int c)
{
    if(a>=b && a>=c)
    {
        return a;
    }
    else if(b>=a && b>=c)
    { 
        return b;
    }
    else
    { 
        return c;
    }
}

int main()
{
    int a=6, b=7, c=2;
    int result =max3(a, b, c);
    printf("%d", result);
    return 0;
}