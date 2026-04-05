#include <stdio.h>
int main()
{
    int a=100;
    int *p = &a;
    printf("Размер указателя %d= %zu байт", a, sizeof(*p));
    return 0;
}