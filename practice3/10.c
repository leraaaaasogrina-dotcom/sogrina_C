#include <stdio.h>
int main()
{
    
    int n;
    int arr[n];
    printf("Введи количество элементов в массиве:");
    scanf("%d", &n);
    printf("Введите n чисел");
    scanf("%d", &arr[n-1]);
    int x;
    x = arr[0];
    arr[0]=arr[n-1];
    arr[n-1]= x;

    
    printf("%d, %d\n", arr[0], arr[n-1]);
    return 0;
}