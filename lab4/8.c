#include <stdio.h>
#include <string.h>

#define MAX_NAME 50
#define MAX_PEOPLE 100

struct Person
{
    char name[MAX_NAME];
    int age;
};

int main()
{
    int n;
    
    printf("Введите количество студентов: ");
    scanf("%d", &n);
    
    while(getchar() != '\n');
    
    struct Person people[MAX_PEOPLE];
    
    printf("\n    Ввод данных     \n");
    for(int i = 0; i < n; i++) {
        printf("\nСтудент %d:\n", i + 1);
        
        printf("  Имя: ");
        fgets(people[i].name, sizeof(people[i].name), stdin);
        
        size_t len = strlen(people[i].name);
        if(len > 0 && people[i].name[len - 1] == '\n') {
            people[i].name[len - 1] = '\0';
        }
        
        printf("  Возраст: ");
        scanf("%d", &people[i].age);
        
        while(getchar() != '\n');
    }
    
    FILE *file = fopen("people.bin", "wb");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        return 1;
    }
    
    fwrite(&n, sizeof(int), 1, file);
    fwrite(people, sizeof(struct Person), n, file);
    
    fclose(file);
    printf("\nМассив структур записан в файл people.bin\n");
    
    file = fopen("people.bin", "rb");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        return 1;
    }
    
    int newN;
    struct Person newPeople[MAX_PEOPLE];
    
    fread(&newN, sizeof(int), 1, file);
    
    if(newN > MAX_PEOPLE) {
        printf("Ошибка: слишком много записей в файле!\n");
        fclose(file);
        return 1;
    }
    
    fread(newPeople, sizeof(struct Person), newN, file);
    
    fclose(file);
    
    printf("\n    Прочитано из файла.    \n");
    for(int i = 0; i < newN; i++) {
        printf("%d. Имя: %s, Возраст: %d\n", i + 1, newPeople[i].name, newPeople[i].age);
    }
    
    return 0;
}