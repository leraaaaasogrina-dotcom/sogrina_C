#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Введитe количество элементов=");
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

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr); //освободить память
    return 0;
}