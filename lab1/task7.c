#include <stdio.h>
 
int main(void)
{
    float a = 0.1L;
    float b = 0.2L;
    long double sum = a+b;
    printf("Сумма = %20Lf\n", sum);
    return 0;
}