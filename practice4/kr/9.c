#include <stdio.h>
int count_digits(int n)
{
    int count = 0;
    while(n != 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    printf("введите число");
    scanf("%d", &n);
    int result=count_digits(n);
    printf("%d\n", result);
    return 0;
}