#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[256];

    printf("Введите строку: ");
    fgets(buffer, sizeof(buffer), stdin);
    
    size_t len = strlen(buffer);
    if(len > 0 && buffer[len - 1] == '\n') {
        buffer[len - 1] = '\0';
    }
    
    FILE *file = fopen("test.txt", "w");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        return 1;
    }
    
    fprintf(file, "%s\n", buffer);
    fclose(file);
    printf("Строка записана в файл test.txt\n");
    
    file = fopen("test.txt", "r");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        return 1;
    }
    
    printf("\nСодержимое файла:\n");
    
    while(fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(file);
    
    return 0;
}