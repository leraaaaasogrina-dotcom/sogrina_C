#include <stdio.h>
int main()
{
    int n[10];
    printf("Введите 10 чисел");
    int i;
    for(i=0; i< 10; i++)
    {scanf("%d", &n[i]);
    }
    printf("\nЧисла в обратном порядке\n");
    for(i=10; i>=1; i--)
    {
        printf("%d", n[i]);
    }

    printf("\n");
    return 0;
}