#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Введитe количество элементов=");
    scanf("%d", &n);

    int *arr = (int*)calloc(n, sizeof(int));
    if(arr == NULL) 
    {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr); //освободить память
    return 0;
}