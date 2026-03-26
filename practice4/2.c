#include <stdio.h>
int main()
{
    int x = 20;
    int *p = &x; 
    *p = 30;
    printf("переменная %d", x);        
    return 0;
}