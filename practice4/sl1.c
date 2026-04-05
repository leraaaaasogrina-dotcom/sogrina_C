#include <stdio.h>
int main()
{
    char *str;
    char *dest[100];
    char *p =str;
    char *q =res;
    int count;
    while(*p != '\0')
    {
        count =1;
        while(*(p+count)== *p)
        {
            count++;
        }
        *q = *p;
        q++;
    }
    if(count>1)
    {
        if(count>=10)
        {
            *q = (count/10) +'0';
            q++;
            *q = (countc%10)+ '0';
            q++;
        }
        else{
            *q= count + '0';
            q++;
        }
         p +=count;
    }
   *q ='0';
   
}