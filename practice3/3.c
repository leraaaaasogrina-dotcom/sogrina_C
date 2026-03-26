#include <stdio.h>
int main()
{
    int i;
    int min;
    int n;
    int min_i=0;
    printf("Введи количество элементов в массиве:");
    scanf("%d", &n);
    printf("Введите n чисел");
    int array[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    min=array[min_i];
    for(i=0; i<n; i++)
    {
        if(array[i]<min)
        { 
            min = array[i];
            min_i=i;
        }
    }
    printf("Минимальное число=%d\n", min);
    printf("мин индекс%d", min_i);
    return 0;

}