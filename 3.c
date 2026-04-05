#include <stdio.h>
struct Data
{
   int day;
   char month;
   int year;
};
struct Person
{
    char name[50];
    struct Data besday;
};
int main()
{
    struct Person people[3]= { {"Tom", 6, 4, 2009}, {"bell", 2, 5, 1999}, {"Tom2", 9, 7, 1995}};
    
        for(int i=0; i<3; i++)
        {
            if(people[i].besday.year>2000)
            {
                printf("%d. Name:%s, Year %d\n", i+1, people[i].name, people[i].besday.year);
            }
        }
    
    return 0;
}