#include <stdio.h>
void print_array(int *arr, int n)
{
    for (int i = 0; i < n; i++){
        printf("%d ", *arr);
        arr++;
    }

    return;
}

int main()
{
    // вывод массива
    int n;
    printf("Введи количество элементов в массиве:");
    scanf("%d", &n);
    int arr[n];
    printf("Введите %d чисел", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //int arr2[] = {1, 5 , 7, 8};
    print_array(arr, n);
    //print_array(arr2, 4);

    return 0;
}