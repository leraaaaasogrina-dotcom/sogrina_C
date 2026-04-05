#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, m;
    printf("Введите начальное количество элементов: ");
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
    printf("Введите новый размер массива (больше %d): ", n);
    scanf("%d", &m);
    if(m > n) 
    {
        arr = (int*)realloc(arr, m * sizeof(int));
        
        if(arr == NULL) {
            printf("Ошибка увеличения памяти!\n");
            return 1;
        }
    
        printf("Введите %d новых элементов:\n", m - n);
        for(int i = n; i < m; i++) 
        {
            scanf("%d", &arr[i]);
        }
    }
    else 
    {
        printf("Новый размер должен быть больше старого!\n");
    }
     printf("Обновлённый массив (%d элементов): ", m);
    for(int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    //уменьшение
    int k;
    printf("\nВведите новый размер для уменьшения (меньше %d): ", m);
    scanf("%d", &k);
    
    if(k < m && k > 0) 
    {
        arr = (int*)realloc(arr, k * sizeof(int));
        
        if(arr == NULL) {
            printf("Ошибка уменьшения памяти!\n");
            return 1;
        }
    
        printf("Массив после уменьшения (%d элементов): ", k);
        for(int i = 0; i < k; i++) 
        {
            printf("%d ", arr[i]);
        }
    }
    else 
    {
        printf("Новый размер должен быть меньше старого и больше 0!\n");
    }
    free(arr);
    
    return 0;
}