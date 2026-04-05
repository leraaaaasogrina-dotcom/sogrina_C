#include <stdio.h>
int main()
{
    int x = 50;
    int *px = &x;
    int y = 10;
    int *py = &y;
    if(px>py)
    {
        printf("адрес Х %p > aдреса Y %p", (void*)px, (void*)py);
    }
    else
    {
       printf("адрес Y %p > aдреса X %p", (void*)py, (void*)px); 
    }
    return 0;
}