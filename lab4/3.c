#include <stdio.h>

int main()
{
    FILE *file = fopen("test.txt", "w");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        return 1;
    }

    fputs("Hello, world!\n", file);
    fputs("Goodbye!\n", file);
    
    fclose(file);
    printf("Строки записаны в файл.\n");

    file = fopen("test.txt", "r");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        return 1;
    }
    
    char buffer[256];
    
    printf("\nСодержимое файла:\n");
    
    while(fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(file);
    
    return 0;
}