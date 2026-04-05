#include <stdio.h>
int main()
{
    int n, i;
    printf("Введи количество элементов в массиве:");
    scanf("%d", &n);
    int arr[n];
    printf("Введите %d чисел", n);
    

    for(i=0; i<n; i++)
    {
     scanf("%d", &arr[i]);
    }
    int last = arr[n - 1];
    for(i=n-1; i>0; i--)
    {
     arr[i] = arr[i - 1];
    }

    arr[0]=last;

    for(i=0; i<n; i++)
    {
       printf("%d", arr[i]); 
    }
    return 0;
}