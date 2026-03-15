#include <stdio.h>
 
int main(void)
{
    int total_seconds;
    int hours, minutes, seconds;

    printf("Введите количество секунд с начала суток: ");
    scanf("%d", &total_seconds);

    // 1 час = 3600 секунд
    hours = total_seconds / 3600;
    // Остаток секунд после вычитания часов
    int remainder = total_seconds % 3600;
    // 1 минута = 60 секунд
    minutes = remainder / 60;
    // Остаток секунд после вычитания минут
    seconds = remainder % 60;

  
    printf("Время: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}