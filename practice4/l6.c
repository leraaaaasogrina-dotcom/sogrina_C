#include <stdio.h>
int main()
{
    char str[] = "tralalela tralala";
    char *p = str;
    int position = 0;
    while(*p != '\0')
    {
        if(position % 2 == 1)
        {
            
            if(*p>= 'a' && *p<= 'z')
            {
                *p = *p -32;
            }
        }
        position++;
        p++;
    }
    
    printf("%s\n", str);
    return 0;
}