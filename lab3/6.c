#include <stdlib.h>
#include <stdio.h>
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
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Исходный массив: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int index, value;
    printf("\nВведите индекс для вставки (0-%d): ", n);
    scanf("%d", &index);
    printf("Введите значение для вставки: \n");
    scanf("%d", &value);
    
    if(index < 0 || index > n) {
        printf("Ошибка: неверный индекс!\n");
        free(arr);
        return 1;
    }

    n++;
    arr = (int*)realloc(arr, n * sizeof(int));
    
    if(arr == NULL) {
        printf("Ошибка при увеличении памяти!\n");
        return 1;
    }

    for(int i = n - 1; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[index] = value;
    printf("Массив после вставки элемента %d на позицию %d:\n", value, index);
    printf("Обновлённый массив (%d элементa): ", n);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}