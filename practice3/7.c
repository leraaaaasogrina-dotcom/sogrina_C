#include <stdio.h>
int main()
{
    int i;
    double average;
    int n;
    
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
    average = (double)sum / n;

    printf("сумма=%d\n", sum);
    printf("Среднее число%2f\n", average);
    return 0;
}