#include <stdio.h>
int sum_array(int *arr, int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += *arr;
        arr++;
    }

    return sum;
}
int main()
{
    int n;
    printf("Введи количество элементов в массиве:");
    scanf("%d", &n);
    int arr[n];
    printf("Введите %d чисел", n); 
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
  
   int result=sum_array(arr, n);
    printf("%d\n", result);
    return 0;
}