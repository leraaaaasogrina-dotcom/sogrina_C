#include <stdio.h>
int main()
{
    char str[100];
    char dl;
    char *p, *q;
   
    printf("Введит символ для удаления");
    scanf("%s", &dl);
    printf("Введит текст");
    scanf("%s", str);
    p=str;
    q=str;
    while(*p != '\0')
    {
     if(*p != dl)
     {
        *q=*p;
        q++;
     }
     p++;
    }
    *q = '\0';
    printf("результат= %s\n", str);
    return 0;
}