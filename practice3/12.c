#include <stdio.h>
int main()
{
    int n;
    int i;
    int index=-1;
    printf("Введи количество элементов в массиве:");
    scanf("%d", &n);
    int arr[n];
    printf("Введите %d чисел", n);
    
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]<0)
         {
            index=i;
            break;
         }
        else if(arr[i]>=0)
        {
            index=-1;
        }
        
        
    } 
    printf("Индекс:%d\n", index);
    return 0;
}