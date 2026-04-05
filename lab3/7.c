#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    int age;
};

int main()
{
    int n;
    
    printf("Введите количество студентов: ");
    scanf("%d", &n);
    
    struct Student *students = (struct Student*)malloc(n * sizeof(struct Student));
    
    if(students == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    
    printf("Ввод данных студентов ---\n");
    for(int i = 0; i < n; i++) {
        printf("Студент %d:\n", i + 1);
        printf("Имя: ");
        scanf("%s", students[i].name);
        printf("Возраст: ");
        scanf("%d", &students[i].age);
    }
    
    printf("\n   Список студентов.  \n");
    for(int i = 0; i < n; i++) {
        printf("%d. %s, %d лет\n", i + 1, students[i].name, students[i].age);
    }
    
    int maxageIndex = 0;
    for(int i = 1; i < n; i++) {
        if(students[i].age > students[maxageIndex].age) {
            maxageIndex = i;
        }
    }
    
    printf("\n   Самый старший студент.  \n");
    printf("Имя %s, возраст %d лет\n", students[maxageIndex].name, students[maxageIndex].age);
    
    free(students);
    
    return 0;
}