#include <stdio.h>
int main()
{
    char str[]= "hello";
    char *p = str;
    char count=0;
    while(*p != '\0')
    {
        count++;
        p++;
    }
    printf("длинна строки = %d\n", count);
    return 0;
}