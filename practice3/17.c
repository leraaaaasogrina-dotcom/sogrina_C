#include <stdio.h>
int main()
{
    int i, n, max_i=0;
    printf("Введи количество элементов в массиве:");
    scanf("%d", &n);
    printf("Введите %d чисел", n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    max=arr[max_i];
    for(i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            max_i=i;
        }
    }
    for(i=max_i +1; i<n; i++)
    {
        arr[i]=0;
        
    }
    for(i=0; i<n; i++)
    {printf("%d", arr[i]);}
   
    return 0;
}