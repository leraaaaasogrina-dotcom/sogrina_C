#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("data.txt", "w");
    if(file == NULL) {
        printf("Ошибка создания файла!\n");
        return 1;
    }
    
    fprintf(file, "0123456789Hello world! This is a test file for fseek.\n");
    fprintf(file, "Second line with more text.\n");
    fprintf(file, "Third line.\n");
    
    fclose(file);
    printf("Файл data.txt создан и заполнен.\n\n");
    
    file = fopen("data.txt", "r");
    
    if(file == NULL) {
        printf("Ошибка открытия файла!\n");
        return 1;
    }

    fseek(file, 10, SEEK_SET);
    
    char buffer[256];
    fread(buffer, 1, 50, file);
    buffer[50] = '\0'; 
    
    printf("Данные с позиции 10:\n");
    printf("%s\n", buffer);
    
    fclose(file);
    
    return 0;
}