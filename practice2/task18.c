#include <stdio.h>
int main(void)
{
    int num;
    int count = 0;
    
    printf("Введите числа (0 - закончить)");
    
    while(1)
    {
        scanf("%d", &num);

        if (num == 0)
            break;
        if(num % 7 == 0)
         count++;

    }
    printf("Количество чисел, кратных 7: %d\n", count);
    return 0;
}