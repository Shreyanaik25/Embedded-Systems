#include<stdio.h>
struct Employee
{
    char name[100];
    int age;
    int salary;
};
int main()
{
    struct Employee e[100];
    int n;
    printf("Enter the number of employee:");
    scanf("%d",&n);
    FILE *fp=fopen("Emplyee.dat","wb");
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        printf("Enter Employee Name:");
        scanf(" %[^\n]",e[i].name);
        printf("Enter Employee Age:");
        scanf("%d",&e[i].age);
        printf("Enter Employee salary:");
        scanf("%d",&e[i].salary);
        fwrite(&e[i],sizeof(e[i]),1,fp);
    }
    fclose(fp);
    return 0;

}