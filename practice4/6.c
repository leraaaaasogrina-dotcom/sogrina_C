#include <stdio.h>
int main()
{
    int a=5;
    int *pa=&a;
    int b=10;
    int *pb = &b;
    *pb = *pa;
    
    printf("a=%d", *pb);
    return 0;
}