#include <stdio.h>
int main(void)
{
    int num;
    int sum = 0;
    
    printf("Введите числа (0 - закончить):\n");
    
    while(1)
    {
        scanf("%d", &num);

        if (num == 0)
            break;
        if(num > 0)
         sum += num;

    }
    printf("Сумма чисел: %d\n", sum);
    return 0;
}