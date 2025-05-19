#include <stdio.h>
#include <string.h>

enum Gender
{
    Male,
    Female
};

struct Student
{
    char name[20];
    int age;
    enum Gender sex;
};

int main()
{
    struct Student s1 = {"Foyzol", 22, Male};

    printf("%s %d %s", s1.name, s1.age, s1.sex);

    return 0;
}