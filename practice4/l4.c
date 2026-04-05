#include <stdio.h>
int main()
{
    char str[]= "LERA-spiking 'hello'";
    char *p = str;
    printf("Исходная строка: %s\n", str);
    
    while(*p != '\0')
    {
     if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || 
        *p=='u' || *p=='y' || *p=='A' || *p=='E' || 
        *p=='I' || *p=='O' || *p=='U' || *p=='Y')
     {
        *p = '*';
     }
     p++;
    }
    
    
    printf("Изменненная строка %s", str);
    
    return 0;
}