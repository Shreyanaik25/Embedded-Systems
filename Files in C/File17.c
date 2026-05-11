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

    FILE *fp = fopen("student.dat", "wb");

    if (fp == NULL)
    {
        printf("File could not open.\n");
        return 1;
    }

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter age: ");
    scanf("%d", &s.age);

    printf("Enter marks: ");
    scanf("%d", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);

    fclose(fp);

    printf("Student saved in binary file.\n");

    return 0;
}
