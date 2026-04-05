#include <stdio.h>
int main()
{
    char str[100];
    char *p = str;
    //int position = 0;
    printf("введите слово");
    scanf("%s", str)
    while(*p != '\0')
    {
        if()
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
