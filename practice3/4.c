#include <stdio.h>
int main()
{
    int n;
    int i;
    int sum=0;
    printf("Введи количество элементов в массиве:");
    scanf("%d", &n);
    printf("Введите n чисел");
    
    int array[n]; 
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
        
        
        sum += array[i];
        
    }
    
    
    printf("сумма=%d\n", sum);
    return 0;
}