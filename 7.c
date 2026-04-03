#include <stdio.h>

#define MAX_STUDENTS 100

enum Course {
    FIRST = 1,
    SECOND = 2,
    THIRD = 3,
    FOURTH = 4
};

struct Student {
    char name[50];
    int age;
    enum Course course;
    float grade;
};

struct Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Массив переполнен!\n");
        return;
    }
    
    struct Student newStudent;
    
    printf("Введите имя: ");
    scanf("%s", newStudent.name);
    
    printf("Введите возраст: ");
    scanf("%d", &newStudent.age);
    
    int courseNum;
    printf("Введите курс (1,2,3,4): ");
    scanf("%d", &courseNum);
    newStudent.course = (enum Course)courseNum;
    
    printf("Введите средний балл: ");
    scanf("%f", &newStudent.grade);
    
    students[studentCount] = newStudent;
    studentCount++;
    
    printf("Студент добавлен!\n");
}

void printAllStudents() {
    if (studentCount == 0) {
        printf("Список пуст!\n");
        return;
    }
    
    printf("\nСПИСОК СТУДЕНТОВ\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Имя: %s\n", students[i].name);
        printf("Возраст: %d\n", students[i].age);
        printf("Курс: %d\n", students[i].course);
        printf("Ср.Балл: %.2f\n", students[i].grade);
    }
}

struct Student* findByName(char name[]) {
    for (int i = 0; i < studentCount; i++) {
        int equal = 1;
        for (int j = 0; name[j] != '\0' || students[i].name[j] != '\0'; j++) {
            if (name[j] != students[i].name[j]) {
                equal = 0;
                break;
            }
        }
        if (equal == 1) {
            return &students[i];
        }
    }
    return NULL;
}

void sortByGrade() {
    struct Student temp;
    
    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = 0; j < studentCount - i - 1; j++) {
            if (students[j].grade < students[j + 1].grade) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    printf("Сортировка выполнена!\n");
}

int main() {
    int choice;
    char searchName[50];
    struct Student* found;
    
    while (1) {
        printf("\n    МЕНЮ.  \n");
        printf("1. Добавить студента\n");
        printf("2. Вывести всех студентов\n");
        printf("3. Найти студента по имени\n");
        printf("4. Отсортировать по баллу\n");
        printf("5. Выйти\n");
        printf("Выбор: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                printAllStudents();
                break;
            case 3:
                printf("Введите имя: ");
                scanf("%s", searchName);
                found = findByName(searchName);
                if (found != NULL) {
                    printf("Найден: %s, %d лет, %d курс, балл %.2f\n",
                           found->name, found->age, found->course, found->grade);
                } else {
                    printf("Не найден\n");
                }
                break;
            case 4:
                sortByGrade();
                break;
            case 5:
                printf("До свидания!\n");
                return 0;
            default:
                printf("Неверный выбор!\n");
        }
    }
}