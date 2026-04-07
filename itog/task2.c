#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100
struct Book
{
    char title[MAX_LEN];
    char autor[MAX_LEN];
    float price;
    int year;
    
};

int main()
{
    int n;
    printf("Введите количество книг=");
    scanf("%d", &n);
    while(getchar() != '\n');

    struct Book *books = (struct Book*)malloc(n * sizeof(struct Book));
    if(books == NULL) {
        printf("Ошибка выделания памяти");
        return 1;
    }
    printf("     Заполнение данных    \n");
    for(int i = 0; i < n; i++) 
    {
        printf("%d. Книга \n", i + 1);
        printf("Название: ");
        fgets(books[i].title, MAX_LEN, stdin);
        size_t len = strlen(books[i].title);
        if(len > 0 && books[i].title[len - 1] == '\n') 
        {
            books[i].title[len - 1] = '\0';
        }
        printf("Aвтор: ");
        fgets(books[i].autor, MAX_LEN, stdin);
        size_t len2 = strlen(books[i].autor);
        if(len > 0 && books[i].autor[len - 1] == '\n') 
        {
            books[i].autor[len - 1] = '\0';
        }
        printf("Цена=");
        scanf("%f", &books[i].price);

        printf("Год-");
        scanf("%d", &books[i].year);
        while(getchar() != '\n');
    }
    printf("     Список книг     \n");
    for(int i = 0; i < n; i++) 
    {
        printf("\n%d. %s\n", i + 1, books[i].title);
        printf("Автор: %s\n", books[i].autor);
        printf("Цена: %.2f руб.\n", books[i].price);
        printf("Год: %d\n", books[i].year);
    }
    free(books);
    printf("Память освобождена.");
    return 0;

}