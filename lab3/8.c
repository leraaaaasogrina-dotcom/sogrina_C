#include <stdio.h>
#include <stdlib.h>
int *arr = NULL;
int size = 0;
void addElement();
void deleteElement();
void List();
void resizeArray();
void exitProgram();

void (*menu[])() = {
    addElement,
    deleteElement,
    List,
    resizeArray,
    exitProgram    
};
void addElement()
{
    int index, value;
    
    printf("\nДобавление элемента\n");
    printf("Текущий размер: %d\n", size);
    printf("Введите индекс для вставки (0-%d): ", size);
    scanf("%d", &index);
    
    if(index < 0 || index > size) {
        printf("Ошибка: неверный индекс!\n");
        return;
    }
    printf("Введите значение: ");
    scanf("%d", &value);
    
    size++;
    arr = (int*)realloc(arr, size * sizeof(int));
    
    if(arr == NULL) {
        printf("Ошибка выделения памяти!\n");
        size--;
        return;
    }

    for(int i = size - 1; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    printf("Элемент %d добавлен на позицию %d\n", value, index);
}
void deleteElement()
{
    int index;
    
    if(size == 0) {
        printf("Массив пуст!\n");
        return;
    }
    
    printf("   Удаление элемента.  ");
    printf("Введите индекс для удаления (0-%d): ", size - 1);
    scanf("%d", &index);
    
    if(index < 0 || index >= size) {
        printf("Ошибка: неверный индекс!\n");
        return;
    }

    for(int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;
    arr = (int*)realloc(arr, size * sizeof(int));
    
    printf("Элемент с индексом %d удалён\n", index);
}
void List()
{
    if(size == 0) {
        printf("Массив пуст!\n");
        return;
    }
    
    printf("\n    Список элементов    \n");
    for(int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
    printf("Всего элементов: %d\n", size);
}

void resizeArray()
{
    int newSize;
    
    printf("   Изменение размера.  ");
    printf("Текущий размер: %d\n", size);
    printf("Введите новый размер: ");
    scanf("%d", &newSize);
    
    if(newSize <= 0) {
        printf("Размер должен быть больше 0!\n");
        return;
    }
    if(newSize > size) 
    {
        arr = (int*)realloc(arr, newSize * sizeof(int));
        if(arr == NULL) {
            printf("Ошибка выделения памяти!\n");
            return;
        }
        printf("\nРазмер увеличен");
    } 
    else if(newSize < size) {
       
        arr = (int*)realloc(arr, newSize * sizeof(int));
        if(arr == NULL && newSize > 0) {
            printf("Ошибка выделения памяти!\n");
            return;
        }
        printf("Размер уменьшен");
    }
    else {
        printf("Размер не изменился\n");
    }
    size = newSize;
}
void exitProgram()
{
    if(arr != NULL) {
        free(arr);
    }
    printf("До свидания!\n");
}

int main()
{
    int choice;
    int menuSize = sizeof(menu) / sizeof(menu[0]);

    printf("Введите начальное количество элементов: ");
    scanf("%d", &size);
    
    if(size > 0) {
        arr = (int*)malloc(size * sizeof(int));
        if(arr == NULL) {
            printf("Ошибка выделения памяти!\n");
            return 1;
        }
        
        printf("Введите %d чисел:\n", size);
        for(int i = 0; i < size; i++) 
        {
        scanf("%d", &arr[i]);
        }
    }
    while(1) {
        printf("      МЕНЮ     \n");
        printf("1. Добавить элемент\n");
        printf("2. Удалить элемент\n");
        printf("3. Вывести список\n");
        printf("4. Изменить размер массива\n");
        printf("5. Выйти\n");
        printf("Выбор: ");
        scanf("%d", &choice);
        
        if(choice >= 1 && choice <= menuSize) {
            menu[choice - 1]();
            if(choice == 5) {
                break;
            }
        } else {
            printf("Неверный выбор! Введите число от 1 до %d\n", menuSize);
        }
    }
    
    return 0;
}