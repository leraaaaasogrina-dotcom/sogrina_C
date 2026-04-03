#include <stdio.h>
int sum_digits(int n)
{
    int sum =0;
    while(n != 0) {
        sum= sum+(n%10);
        n= n/10;
    }
    return sum;
}
int main()
{
     int n;
    printf("введите число");
    scanf("%d", &n);

    int result=sum_digits(n);
    printf("%d\n", result);
    return 0;
}