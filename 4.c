#include <stdio.h>
struct Rectangle
{
    int h;
    int w;
};
//по значению
int square( struct Rectangle rect)
{
    return rect.h * rect.w;
}
int perim(struct Rectangle rect)
{
    return (rect.h + rect.w)*2;
}
//по указателю
int square_2(struct Rectangle *r)
{
    return (r->h * r->w);
}
int perim_2(struct Rectangle *r)
{
    return (r->h + r->w)*2;
}
int main()
{
    struct Rectangle rect = {10, 5};
    // по значению
    printf("--- Передача по значению ---\n");
    printf("Площадь: %d\n", square(rect));
    printf("Периметр: %d\n", perim(rect));

    // Передача по указателю
    printf("\n--- Передача по указателю ---\n");
    printf("Площадь: %d\n", square_2(&rect));  
    printf("Периметр: %d\n", perim_2(&rect));
    return 0;
}