#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Адрес a: %p\n", (void*)&a);
    printf("Адрес b: %p\n", (void*)&b);
    printf("Адрес c: %p\n", (void*)&c);
    
    long diff_ab = (char*)&b - (char*)&a;
    long diff_bc = (char*)&c - (char*)&b;
    
    printf("\nРазница между a и b: %ld байт\n", diff_ab);
    printf("Разница между b и c: %ld байт\n", diff_bc);
    
    printf("\nОбъяснение: Разница между адресами обычно равна размеру типа (int - %lu байт),\n", sizeof(int));
    printf("но компилятор может добавлять выравнивание для оптимизации доступа к памяти.\n");
    printf("Также переменные могут располагаться не строго последовательно.\n");
    
    return 0;
}