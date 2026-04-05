#include <stdio.h>
#include <stdlib.h>
int Max(int *arr, int n)
{
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int Min(int *arr, int n)
{
    int min = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int Sum(int *arr, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    printf("Введитe количество элементов=");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL) 
    {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }
    printf("Введите %d чисел:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int max = Max(arr, n);
    int min = Min(arr, n);
    int sum = Sum(arr, n);
    printf("Максимальный: %d\n", max);
    printf("Минимальный: %d\n", min);
    printf("Сумма: %d\n", sum);
    free(arr);
    return 0;
}