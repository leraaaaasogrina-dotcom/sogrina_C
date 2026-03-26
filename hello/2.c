#include <stdio.h>
int main(void)
{
    int x = 10;
    
    int *px = &x;
    printf("Variable до:=%d\n", *px);
    *px=22;
    printf("Variable после:=%d\n", *px);
    return 0;
}