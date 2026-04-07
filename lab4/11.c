#include <stdio.h>

int main()
{
    FILE *file;
    
    file = fopen("test.txt", "w");
    if(file == NULL) {
        printf("Ошибка создания файла!\n");
        return 1;
    }
    
    fprintf(file, "Hello, world!\n");
    fprintf(file, "This is line 2\n");
    fprintf(file, "This is line 3\n");
    
    fclose(file);
    printf("Файл test.txt создан.\n\n");

    file = fopen("test.txt", "r");
    
    if(file == NULL) {
        printf("Ошибка открытия файла!\n");
        return 1;
    }

    char buffer[256];
    int line = 1;
    
    printf("Содержимое файла:\n");
    
    while(fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%d: %s", line, buffer);
        line++;
    }
    
    if(feof(file)) {
        printf("\n\n.   Достигнут конец файла (EOF).    \n");
    }
    
    if(ferror(file)) {
        printf("\n Ошибка при чтении файла!\n");
    }
    
    fclose(file);
    
    return 0;
}