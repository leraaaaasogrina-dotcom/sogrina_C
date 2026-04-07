#include <stdio.h>

int main()
{
    FILE *file = fopen("test.txt", "w");
    if(file == NULL) {
        printf("Ошибка открытия файла!\n");
        return 1;
    }
    
    printf("Файл успешно открыт!\n");
    fclose(file);
    printf("Файл закрыт.\n");
    
    return 0;
}