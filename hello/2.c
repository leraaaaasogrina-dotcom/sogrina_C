#include <stdio.h>
struct Student
{   
    float mark;
    char name[50];
}; 
int main()
{
    struct Student people[5] = { {5.3, "Tom"}, {9.1, "Bob"}, {1.9, "Alice"}, {8.0, "Bark"}, {4.4, "Sam"}};
    int max=0;
    int i;
   
    for(i = 1; i < 5; i++)
    {
        if(people[i].mark>people[max].mark)
        {
            max=i;
        }
    } 
    printf("Список всех студентов:\n");
    for(i = 0; i<5; i++)
    {
        printf("%d Имя: %s, Оценка: %.2f\n", i+1, people[i].name, people[i].mark);
    }
    
    printf("Студент с наибольшим баллом:\n");
    printf("Имя: %s\n", people[max].name);
    printf("Оценка: %.2f\n", people[max].mark);
    return 0;
}