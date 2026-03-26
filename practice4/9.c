#include <stdio.h>
int main()
{
    int a = 5;
    int *p =NULL;
    if(p==NULL)
    {
        printf("переменная null");
    }
    else {
        printf("переменная %d не null, она равна %d", a, *p);
    }
    return 0;
}