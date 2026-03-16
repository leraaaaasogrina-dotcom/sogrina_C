#include <stdio.h>
int main() 
{

    int num;
    
    printf("Введите трехзначное число: ");
    scanf("%d", &num);
    
    if (num < 100 || num > 999) {
        printf("Ошибка: число не трехзначное!\n");
        return 1;
    }
    
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;
    
    printf("Сотни: %d\n", hundreds);
    printf("Десятки: %d\n", tens);
    printf("Единицы: %d\n", units);
    
    return 0;
}
2b54c02ad42ba8eeb0eb25d8f7712a2c08a83e4b
