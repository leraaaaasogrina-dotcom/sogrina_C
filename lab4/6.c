#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    
    int *arr = (int*)malloc(n * sizeof(int));
    
    if(arr == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    
    printf("Введите %d чисел:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    FILE *file = fopen("data.bin", "wb");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для записи!\n");
        free(arr);
        return 1;
    }
    
    fwrite(arr, sizeof(int), n, file);
    
    fclose(file);
    printf("\nМассив записан в файл data.bin\n");
    
    file = fopen("data.bin", "rb");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для чтения!\n");
        free(arr);
        return 1;
    }
    
    int *newArr = (int*)malloc(n * sizeof(int));
    
    if(newArr == NULL) {
        printf("Ошибка выделения памяти!\n");
        fclose(file);
        free(arr);
        return 1;
    }
    
    fread(newArr, sizeof(int), n, file);
    
    fclose(file);
    
    printf("\nПрочитано из файла:\n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", newArr[i]);
    }
    
    free(arr);
    free(newArr);
    
    return 0;
}