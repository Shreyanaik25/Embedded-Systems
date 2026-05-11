#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    int marks;
};

int main()
{
    struct Student s;

    FILE *fp = fopen("student.dat", "rb");

    if (fp == NULL)
    {
        printf("File could not open.\n");
        return 1;
    }

    fread(&s, sizeof(s), 1, fp);

    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %d\n", s.marks);

    fclose(fp);

    return 0;
}
