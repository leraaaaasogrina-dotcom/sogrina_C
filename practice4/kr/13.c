#include <stdio.h>
int max_arr(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
        
    }
    int max = arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]>max)
        { 
            max = arr[i];
        }
        
    }
    return max;
    
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
    int result=max_arr(arr, n);
    printf("max=%d\n", result);
    return 0;
}