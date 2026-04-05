#include <stdio.h>
int main()
{
    //проверка пароля
    char pass[100];
    
    
    int simvl=0;
    int chisl=0;
    printf("введите пароль");
    scanf("%s", pass);
    char *p = pass;
    while(*p != '\0')
    {
     if(*p >= '0' && *p <='9')
     {
        chisl = 1;
     }
     if(*p >= 'a' && *p <='z' || *p >= 'A' && *p <='Z')
     {
        simvl = 1;
     }
     p++;
    }
    if( simvl && chisl)
    {
        printf("Пароль нажедный");
    }
    else
    {
        printf("нет буквы или числа");
    }
    return 0;
}