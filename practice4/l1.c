#include <stdio.h>
int main()
{
    char str[] = "hello";
    char *p=str;
    while(*p)
    {
        printf("%c", *p);
        p++;
    }
    return 0;
}