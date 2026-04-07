#include <stdio.h>

int main()
{
    char ch;
    FILE *file = fopen("test.txt", "w");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        return 1;
    }
    putc('H', file);
    putc('!', file);
    fclose(file);
    printf("Символы записаны в файл.\n");

    file = fopen("test.txt", "r");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        return 1;
    }
    
    printf("Содержимое файла: ");

    while((ch = getc(file)) != EOF) {
        putchar(ch);
    }
    
    fclose(file);
    
    return 0;
}