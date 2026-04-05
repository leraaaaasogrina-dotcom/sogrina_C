#include <stdio.h>
int is_even(int x)
{
    int count =0;
    if(x % 2 == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int a=5;
    int result = is_even(a);
    printf("%d\n", result);
    return 0;
}    