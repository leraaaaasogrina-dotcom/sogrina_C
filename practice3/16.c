#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0;
    int count = 0;
    printf("Введи количество элементов в массиве:");
    scanf("%d", &n);
    printf("Введите %d чисел", n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int sredne;
    for(i=0; i<n; i++)
    {
        sredne = sum / n;
        
        if(sredne > arr[i])
        {
            count++;
        }
    }
    
    printf("%d", count);
    return 0;
}