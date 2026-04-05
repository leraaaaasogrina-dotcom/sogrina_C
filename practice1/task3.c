#include <stdio.h>
int main()
{
    int a = 40;
    float b = 2.71f;
    char c = 'B';
    double d = 3.14159;
    printf("int занимает: %zu байт\n", sizeof(a));
    printf("float занимает: %zu байт\n", sizeof(b));
    printf("char занимает: %zu байт\n", sizeof(c));
    printf("double занимает: %zu байт\n", sizeof(d));
    return 0;
}