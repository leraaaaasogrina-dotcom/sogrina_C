#include <stdio.h>
int main(void)
{
    int a = 10;
    printf("address = %p\n", a, (void*)&a);
    printf("Hello, World!\n");
    return 0;
}