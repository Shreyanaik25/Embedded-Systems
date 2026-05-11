#include<stdio.h>
struct emp
{
   char name[100];
   int id;
   int salary;
};
int main()
{
    struct emp e;
    FILE *fp=fopen("Employee.dat","rb");
    if(fp==NULL)
    {
        printf("File could not open\n");
        return 1;
    }
    while(fread(&e,sizeof(e),1,fp)==1)
    {
        printf("Name:%s\n",e.name);
        printf("Id:%d\n",e.id);
        printf("Salary:%d\n",e.salary);
    }
    fclose(fp);
    return 0;
}

/*#include <stdio.h>

struct emp
{
    char name[100];
    int id;
    int salary;
};

int main()
{
    struct emp e;
    int index;

    FILE *fp = fopen("Employee.dat", "rb+");

    if (fp == NULL)
    {
        printf("File could not open\n");
        return 1;
    }

    printf("Enter index to update: ");
    scanf("%d", &index);

    fseek(fp, index * sizeof(e), SEEK_SET);

    printf("Enter new employee name: ");
    scanf("%s", e.name);

    printf("Enter new employee id: ");
    scanf("%d", &e.id);

    printf("Enter new employee salary: ");
    scanf("%d", &e.salary);

    fwrite(&e, sizeof(e), 1, fp);

    fclose(fp);

    printf("Record updated successfully\n");

    return 0;
}
    */
