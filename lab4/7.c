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
    struct Person person;
    
    printf("Введите имя: ");
    fgets(person.name, sizeof(person.name), stdin);
    
    size_t len = strlen(person.name);
    if(len > 0 && person.name[len - 1] == '\n') {
        person.name[len - 1] = '\0';
    }
    
    printf("Введите возраст: ");
    scanf("%d", &person.age);
    
    FILE *file = fopen("person.bin", "wb");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        return 1;
    }
    
    fwrite(&person, sizeof(struct Person), 1, file);
    
    fclose(file);
    printf("\nСтруктура записана в файл person.bin\n");
    
    file = fopen("person.bin", "rb");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        return 1;
    }
    
    struct Person newPerson;
    fread(&newPerson, sizeof(struct Person), 1, file);
    
    fclose(file);
    
    printf("\nПрочитано из файла:\n");
    printf("Имя: %s\n", newPerson.name);
    printf("Возраст: %d\n", newPerson.age);
    
    return 0;
}