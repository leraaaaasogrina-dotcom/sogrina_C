#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("data.txt", "w");
    if(file == NULL) {
        printf("Ошибка создания файла!\n");
        return 1;
    }
    fprintf(file, "Hello, world!\n");
    fprintf(file, "This is a test file.\n");
    fprintf(file, "We will calculate its size.\n");
    
    fclose(file);
    printf("Файл data.txt создан.\n");

    file = fopen("data.txt", "rb");
    
    if(file == NULL) {
        printf("Ошибка открытия файла!\n");
        return 1;
    }
    
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    
    printf("Размер файла: %ld байт\n", size);
    
    fclose(file);
    
    return 0;
}