#include <stdio.h>
int max(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int a=3;
    int b=9;
    int result=max(a, b);
    printf("%d",result);
    return 0;
}