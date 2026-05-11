#include<stdio.h>
struct Employee
{
   char name[50];
   int salary;
};
int main()
{
    struct Employee e;
    struct Employee *p;
    p=&e;
    printf("Enter Employee name:");
    scanf(" %[^\n]",p->name);
    printf("Enter Employee salary:");
    scanf("%d",&p->salary);
    printf("Name: %s\n",p->name);
    printf("Salary:%d\n",p->salary);
}