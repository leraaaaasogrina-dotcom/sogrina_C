#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Введите первое число: ");
    scanf("%d", &a);
    printf("Введите второе число: ");
    scanf("%d", &b);
    printf("Сумма: %d\n", a + b);
    printf("Разность: %d\n", a - b);
    printf("Произведение: %d\n", a * b);
    printf("Деление: %d\n", a / b);
    return 0;

}