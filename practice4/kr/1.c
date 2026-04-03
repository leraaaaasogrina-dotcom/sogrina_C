#include <stdio.h>

int sum(int a, int b) {
    int c = a + b;
    return c;
}

void sum2(int a, int b) {
    int c = a + b;
    printf("Сумма sum2: %d\n", c);
    return;
}

int main()
{
    int x = 5, y = 3;
    int result = sum(x, y);
    sum2(x, y);

    printf("Сумма: %d\n", result);

    return 0;
}

