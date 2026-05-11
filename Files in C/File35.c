#include<stdio.h>
struct emp
{
    char name[100];
    int id;
    int salary;
};
int main()
{
    struct emp e[100];
    FILE *fp=fopen("Employee.dat","wb");
    if(fp==NULL)
    {
        printf("File could not open\n");
        return 1;
    }
    for(int i=0;i<3;i++)
    {
        printf("Enter employee name:");
        scanf("%s",e[i].name);
        printf("Enter employee id:");
        scanf("%d",&e[i].id);
        printf("Enter employee salary:");
        scanf("%d",&e[i].salary);
        fwrite(&e[i],sizeof(e[i]),1,fp);
    }
    fclose(fp);
    printf("Records saved succesfully\n");
    return 0;
}
*/