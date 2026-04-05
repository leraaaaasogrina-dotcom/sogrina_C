#include <stdio.h>
int main()
{
    int n, i;
     printf("Введи количество элементов в массиве:");
    scanf("%d", &n);
    printf("Введите %d чисел", n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
   
    for(i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
       
    }
    int max_2=arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]>max_2 && arr[i]<max)
        {
            max_2=arr[i];
        }
    }
    printf("%d", max_2);
    return 0;
}