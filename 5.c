#include <stdio.h>
enum Day
{
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};
struct people
{
    
    enum Day day;
};
int main()
{
int n;
printf("Введите число день недели");
scanf("%d", &n);
struct people meet;
printf("Встреча запланирована на ");
meet.day = n;


    switch(meet.day)
    {
        case  Monday:
        printf("Понедельник");
        break;
        case Tuesday:
            printf("Вторник\n");
            break;
        case Wednesday:
            printf("Среда\n");
            break;
        case Thursday:
            printf("Четверг\n");
            break;
        case Friday:
            printf("Пятница\n");
            break;
        case Saturday:
            printf("Суббота\n");
            break;
        case Sunday:
            printf("Воскресенье\n");
            break;
        default:
            printf("Неизвестный день\n");
    }
    return 0;
}