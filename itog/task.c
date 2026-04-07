#include <stdio.h>


#define MAX_PEOPLE 100
#define MENU_ITEMS 8

void clearInput()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
};

void addPerson();
void printAll();
void sortName();
void sortAge();
void saveToFile();
void loadFromFile();
void searchByName();
void exitProgram();

struct Person
{
    char name[50];
    int age;
    float height;
    int year;
};

struct Person people[MAX_PEOPLE];
int personCount=0;
void (*menu[MENU_ITEMS])() = {
    addPerson,
    printAll,
    sortName,
    sortAge,
    saveToFile,
    loadFromFile,
    searchByName,
    exitProgram
};


int RussianLetter(unsigned char c)
{
    return (c == 0xD0 || c == 0xD1);
}

int isValidName(char *str)
{
    for(int i = 0; str[i] != '\0'; i++) {
        unsigned char c = (unsigned char)str[i];
        
        
        if(c == 0xD0 || c == 0xD1) {
            continue;
        }
        
        // Проверяем, что символ  буква (латиница или русская)
        int isLatin = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
        int isRussian = (c >= 0x90 && c <= 0xBF) || (c >= 0x80 && c <= 0xAF);
        
        if(!isLatin && !isRussian && c != ' ' && c != '-') {
            return 0; // не буква, не пробел, не дефис
        }
    }
    return 1;
}

void addPerson()
{
    if(personCount >= MAX_PEOPLE) {
        printf("Достигнут лимит!\n");
        return;
    }
    
    struct Person newPerson;
    
   
    while(1) {
        printf("Введите имя (русские буквы): ");
        scanf("%s", newPerson.name);
        
        if(isValidName(newPerson.name)) {
            break;
        } else {
            printf("Ошибка! Имя должно содержать только русские буквы!\n");
        }
    }
    
    
    while(1) {
        printf("Введите возраст (положительное число): ");
        scanf("%d", &newPerson.age);
        if(newPerson.age > 0) break;
        printf("Ошибка! Возраст должен быть положительным!\n");
    }
    
  
    while(1) {
        printf("Введите рост (положительное число): ");
        scanf("%f", &newPerson.height);
        if(newPerson.height > 0) break;
        printf("Ошибка! Рост должен быть положительным!\n");
    }
    

    while(1) {
        printf("Введите год рождения: ");
        scanf("%d", &newPerson.year);
        if(newPerson.year > 0 && newPerson.year < 2025) break;
        printf("Ошибка! Введите реальный год рождения!\n");
    }
    
    people[personCount] = newPerson;
    personCount++;
    printf("Человек добавлен!\n");
}

//пункт 2 
void printAll()
{
    if(personCount == 0) {
        printf("Нет записей!\n");
        return;
    }
    printf("Список всех записей:\n");
    for(int i = 0; i < personCount; i++) {
        printf("%d. Имя: %s\n", i + 1, people[i].name);
        printf("   Возраст: %d\n", people[i].age);
        printf("   Рост: %.2f\n", people[i].height);
        printf("   Год рождения: %d\n", people[i].year);
    }
}

void sortName() // по имени
{
    if(personCount == 0) {
        printf("Нет записей для сортировки!\n");
        return;
    }
    for(int i = 0; i < personCount - 1; i++) {
        for(int j = 0; j < personCount - i - 1; j++) {
            int k = 0;
            while(people[j].name[k] != '\0' && people[j+1].name[k] != '\0') {
                if(people[j].name[k] != people[j+1].name[k]) {
                    break;
                }
                k++;
            }
            
            if(people[j].name[k] > people[j+1].name[k]) {
                struct Person temp = people[j];
                people[j] = people[j+1];
                people[j+1] = temp;
            }
        }
    }
    printf("Сортировка по имени выполнена!\n");
}

void sortAge() //сорт по возрасту
{
    if(personCount == 0) {
        printf("Нет записей для сортировки!\n");
        return;
    }
    
    for(int i = 0; i < personCount - 1; i++) {
        for(int j = 0; j < personCount - i - 1; j++) {
            if(people[j].age > people[j+1].age) {
                struct Person temp = people[j];
                people[j] = people[j+1];
                people[j+1] = temp;
            }
        }
    }
    printf("Сортировка по возрасту выполнена!\n");
}

void saveToFile()
{
    // Открываем файл для записи ("wb")
    FILE *file = fopen("people.dat", "wb");
    
    if(file == NULL) {
        printf("Ошибка открытия файла для сохранения!\n");
        return;
    }
    fwrite(&personCount, sizeof(int), 1, file);
    fwrite(people, sizeof(struct Person), personCount, file);
    
    fclose(file);
    printf("Данные загружены из файла people.dat (%d записей)\n", personCount);
}

void loadFromFile()
{
    FILE *file = fopen("people.dat", "rb");  // "rb" = read binary
    
    if(file == NULL) {
        printf("Файл people.dat не найден!\n");
        return;
    }
    
    int loadedCount;
    
    // читаем количество записей
    fread(&loadedCount, sizeof(int), 1, file);
    
    // Проверяем, что записей не больше, чем может вместить массив
    if(loadedCount > MAX_PEOPLE) {
        printf("Ошибка! Слишком много записей в файле.\n");
        fclose(file);
        return;
    }
    
    fread(people, sizeof(struct Person), loadedCount, file);
    
    // Обновляю счётчик
    personCount = loadedCount;
    
    fclose(file);
    
    printf("Загружено %d записей из файла people.dat\n", personCount);
}

void searchByName()
{
    if(personCount == 0) {
        printf("Нет записей для поиска!\n");
        return;
    }
    
    char searchName[50];
    int found = 0;
    
    printf("Введите имя для поиска: ");
    scanf("%s", searchName);
    clearInput();
    
    printf("Результаты поиска:\n");
    
    
    for(int i = 0; i < personCount; i++) {
        // Сравниваем имена
        int match = 1;
        int k = 0;
        
        while(searchName[k] != '\0' || people[i].name[k] != '\0') {
            if(searchName[k] != people[i].name[k]) {
                match = 0;
                break;
            }
            k++;
        }
        
        if(match) {
            printf("%d. Имя: %s\n", i + 1, people[i].name);
            printf("   Возраст: %d\n", people[i].age);
            printf("   Рост: %.2f\n", people[i].height);
            printf("   Год рождения: %d\n", people[i].year);
            found = 1;
        }
    }
    
    if(!found) {
        printf("Запись с именем \"%s\" не найдена!\n", searchName);
    }
}
void exitProgram()
{
    printf("До свидания!\n");
}

int main()
{
    int choice;
     while(1) {
        printf("\n    МЕНЮ\n");
        printf("1. Добавить запись\n");
        printf("2. Вывести все записи\n");
        printf("3. Сортировка по имени\n");
        printf("4. Сортировка по возрасту\n");
        printf("5. Сохранить в файл\n");
        printf("6. Загрузить из файла\n");
        printf("7. Поиск по имени\n");
        printf("8. Выйти\n");
        printf("Выбор: ");
        
        scanf("%d", &choice);
        
        if(choice >= 1 && choice <= MENU_ITEMS) {
            menu[choice - 1]();
        } else {
            printf("Неверный выбор!\n");
        }
        if(choice == 8) break; 
    }
    return 0;
}