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

    int index;
    printf("Введите индекс элемента для удаления (0-%d): ", n - 1);
    scanf("%d", &index);
    
    if(index < 0 || index >= n) {
        printf("Ошибка: неверный индекс!\n");
        free(arr);
        return 1;
    }
    for(int i = index; i < n - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    n--;
    arr = (int*)realloc(arr, n * sizeof(int));
    
    if(arr == NULL && n > 0) {
        printf("Ошибка при уменьшении памяти!\n");
        return 1;
    }
    printf("Массив после удаления элемента: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    
    return 0;
}