#include <stdio.h>
int main()
{
    int a=7;
    int b=10;
    int *pa = &a;
    int *pb = &b;
    int c = *pa;
    *pa = *pb;
    *pb = c;
    
   
    printf("Значение а = %d, b = %d", *pa, *pb);
    return 0;
}