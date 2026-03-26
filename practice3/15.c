#include <stdio.h>
int main()
{
    int n, i;
  
    int sum = 0;
    printf("Введи количество элементов в массиве:");
    scanf("%d", &n);
    printf("Введите %d чисел", n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(i % 2 == 0)
        {
            sum += arr[i];
        }
    }
    printf("Сумма четных интексов = %d", sum);
    return 0;
}