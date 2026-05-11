#include<stdio.h>
struct Student
{
   char name[100];
   int marks;
   int age;
};
int main()
{
    struct Student s[100];
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    FILE *fp=fopen("Record.txt","w");
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        printf("Enter Name:");
        scanf(" %[^\n]",s[i].name);
        printf("Enter Age:");
        scanf("%d",&s[i].age);
        printf("Enter marks:");
        scanf("%d",&s[i].marks);
    }
    for(int i=0;i<n;i++)
    {
        fprintf(fp,"Name:%s\n",s[i].name);
        fprintf(fp,"Age:%d\n",s[i].age);
        fprintf(fp,"Marks:%d\n",s[i].marks);
    }
    fclose(fp);
    return 0;
    
}