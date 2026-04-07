#include <stdio.h>

int main()
{
    FILE *file = fopen("txt.txt", "w");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        return 1;
    }

    fprintf(file, "Имя: %s, Возраст: %d\n", "Аня", 20);
    fputs("Goodbye!\n", file);

    fclose(file);
    printf("Данные записаны в файл txt.txt\n");

    file = fopen("txt.txt", "r");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        return 1;
    }
    
    char name[50];
    int age;
    
    printf("\nСодержимое файла:\n");
    
    while(fscanf(file, "Имя: %s, Возраст: %d\n", name, &age) == 2) {
        printf("Имя: %s, Возраст: %d\n", name, age);
    }
    
    fclose(file);
    
    return 0;
}