#include <stdio.h>
int main()
{
    int n;
    int i;
    int max;
    printf("Введи количество элементов в массиве:");
    scanf("%d", &n);
    printf("Введите n чисел");
    
    int array[n]; 
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    max = array[0];
    for(i=1; i<n; i++)
    {
        if(array[i]>max)
        { max = array[i];}
        
    }
    printf("макс=%d\n", max);
    return 0;

}