#include <stdio.h>
int main()
{
    int x = 20;     
    int *p;         
    p = &x; 
    printf("переменная %d", *p);        
    return 0;
}