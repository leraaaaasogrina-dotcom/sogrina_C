HEAD
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;
    int temp;
    temp = a; // 1. Сохраняем значение a
    a = b;    // 2. Присваиваем a значение b
    b = temp;
    printf("a = %d b = %d\n", a, b);
    return 0;
}
2b54c02ad42ba8eeb0eb25d8f7712a2c08a83e4b
