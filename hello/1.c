#include <stdio.h>
int main(void)
{
    int x = 10;
    int *px = &x;
    printf("Addres %p \n", (void *)px);
    printf("Значение: %d \n", *px);
    return 0;
}