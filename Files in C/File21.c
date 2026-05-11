#include<stdio.h>
struct Employee
{
    char name[100];
    int age;
    int salary;
};
int main()
{
    struct Employee e;
    FILE *fp=fopen("Emplyee.dat","ab");
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    printf("Enter New employee name:");
    scanf(" %[^\n]",e.name);
    printf("Enter Age:");
    scanf("%d",&e.age);
    printf("Enter Salary:");
    scanf("%d",&e.salary);
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
    return 0;
}