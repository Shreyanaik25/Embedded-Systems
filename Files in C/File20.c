#include <stdio.h>

struct Employee
{
    char name[100];
    int age;
    int salary;
};

int main()
{
    struct Employee e;

    FILE *fp = fopen("Emplyee.dat", "rb");

    if (fp == NULL)
    {
        printf("File could not open.\n");
        return 1;
    }

    while(fread(&e, sizeof(e), 1, fp)==1)
    {

    printf("Employee Name: %s\n", e.name);
    printf("Employee age: %d\n",e.age);
    printf("Salary: %d\n", e.salary);
    }
    fclose(fp);

    return 0;
}
