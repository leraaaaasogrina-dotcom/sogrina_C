#include <stdio.h>

union Data {
    int i;      // целое число
    float f;    // дробное число
    char c;     // символ
};

struct TaggedData {
    union Data value;   
    int type;           
};

void printTaggedData(struct TaggedData td) {
    switch (td.type) {
        case 1:
            printf("Хранится int: %d\n", td.value.i);
            break;
        case 2:
            printf("Хранится float: %.2f\n", td.value.f);
            break;
        case 3:
            printf("Хранится char: '%c'\n", td.value.c);
            break;
        default:
            printf("Неизвестный тип!\n");
    }
}

int main() {
    printf("    ЗАДАЧА 1 и 2    \n");
    printf("Работа union (хранится только одно значение)\n\n");
    union Data myData;

    myData.i = 42;
    printf("1. Присвоили myData.i = 42\n");
    printf("   myData.i = %d\n", myData.i);
    printf("   myData.f = %f (мусор)\n", myData.f);
    printf("   myData.c = '%c' (мусор)\n\n", myData.c);
    
    myData.f = 3.14;
    printf("2. Присвоили myData.f = 3.14\n");
    printf("   myData.f = %f\n", myData.f);
    printf("   myData.i = %d (уже не 42! затерто)\n", myData.i);
    printf("   myData.c = '%c' (мусор)\n\n", myData.c);

    myData.c = 'X';
    printf("3. Присвоили myData.c = 'X'\n");
    printf("   myData.c = '%c'\n", myData.c);
    printf("   myData.i = %d (мусор)\n", myData.i);
    printf("   myData.f = %f (мусор)\n\n", myData.f);
    
    printf("        ВЫВОД       \n");
    printf("В union одновременно может храниться ТОЛЬКО ОДНО значение!\n");
    printf("Когда вы записываете новое поле, старое ЗАТИРАЕТСЯ.\n\n");
    
 
    printf("        ЗАДАЧА 3        \n");
    printf("Структура с union и полем-указателем типа\n\n");
    
    struct TaggedData td1;
    struct TaggedData td2;
    struct TaggedData td3;
    

    td1.value.i = 100;
    td1.type = 1;
    printf("Сохранили int 100, type = %d\n", td1.type);
    printTaggedData(td1);
    
    td2.value.f = 2.718;
    td2.type = 2; 
    printf("\nСохранили float 2.718, type = %d\n", td2.type);
    printTaggedData(td2);
    

    td3.value.c = 'Z';
    td3.type = 3;
    printf("\nСохранили char 'Z', type = %d\n", td3.type);
    printTaggedData(td3);
 
    return 0;
}