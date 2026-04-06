#include <stdio.h>
#include <string.h>

#define MAX_NAME 50

struct Person
{
    char name[MAX_NAME];
    int age;
};

int main()
{
    int choice;
    struct Person p;
    FILE *file;
    
    while(1) {
        printf("\n      МЕНЮ      \n");
        printf("1. Добавить человека\n");
        printf("2. Показать всех людей\n");
        printf("3. Выйти\n");
        printf("Выбор: ");
        scanf("%d", &choice);
        
        while(getchar() != '\n');
        
        switch(choice) {
            case 1:
                printf("\n    Добавление человека    \n");
                
                printf("Введите имя: ");
                fgets(p.name, sizeof(p.name), stdin);
                
                size_t len = strlen(p.name);
                if(len > 0 && p.name[len - 1] == '\n') {
                    p.name[len - 1] = '\0';
                }
                
                printf("Введите возраст: ");
                scanf("%d", &p.age);
                while(getchar() != '\n');
                
                file = fopen("people.dat", "ab");
                
                if(file == NULL) {
                    printf("Ошибка открытия файла для записи!\n");
                    break;
                }
                
                fwrite(&p, sizeof(struct Person), 1, file);
                
                fclose(file);
                printf("Человек добавлен!\n");
                break;
                
            case 2:
                printf("\n    Список людей    \n");
                
                file = fopen("people.dat", "rb");
                
                if(file == NULL) {
                    printf("Файл пуст или не существует!\n");
                    break;
                }
                
                int count = 0;
                struct Person temp;
                
                while(fread(&temp, sizeof(struct Person), 1, file) == 1) {
                    count++;
                    printf("%d. Имя: %s, Возраст: %d\n", count, temp.name, temp.age);
                }
                
                if(count == 0) {
                    printf("Нет записей!\n");
                }
                
                fclose(file);
                break;
                
            case 3:
                printf("До свидания!\n");
                return 0;
                
            default:
                printf("Неверный выбор!\n");
        }
    }
    
    return 0;
}