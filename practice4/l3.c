#include <stdio.h>
int main()
{
    char str[]="lera";
    char *p = str;
    int i;
    
    // в обратно порядке
    while(*p != '\0') 
    {
        p++;
    }
    p--;
    while(p>=str)
    {
        printf("%c", *p);
        p--;
    }
    return 0;
}