#include <stdio.h>
struct Student
{
    char name[50];
    int age;
    float mark;
};
int main()
{
    struct Student one;
    printf("Введите имя-");
    scanf("%s", one.name);
    printf("Ввeдите возраст-");
    scanf("%d", &one.age);
    printf("Ввeдите оценку-");
    scanf("%f", &one.mark);
    printf("Name-%s, Age-%d, Makr-%2f", one.name, one.age, one.mark);
    return 0;
}