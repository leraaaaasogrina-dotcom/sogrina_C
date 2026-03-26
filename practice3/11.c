#include <stdio.h>
int main()
{
    int n;
   
    int x;
    int count=0;
    int i;

    printf("Введи количество элементов в массиве:");
    scanf("%d", &n);
    int arr[n];

    printf("Введите %d чисел", n);
    // scanf("%d", &arr[n]);
    
    for(i = 0; i < n; i++)
     {      
        scanf("%d", &arr[i]);
     }
    printf("Введи еще одно число:");
    scanf("%d", &x);
    for(i=0; i<n; i++)
    {
        
        if(arr[i]==x)
        {
            count++;
        } 
        
    }
    printf("Количество=%d\n", count);
    return 0;
}