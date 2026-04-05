#include <stdio.h>
int main()
{
   char str[]= "Здравствуйте как у вас! делишки!!";
   char *p = str;
   int count = 0;
    while(*p != '\0')
    {
     if(*p == '!')
     {
        count++;
     }
      p++;
    }
   
     if(count>3)
     {
        printf("stop\n");
     }
    else
    {
        printf("ничего\n");
    }
   return 0;
}