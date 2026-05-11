#include<stdio.h>
struct Student
{
  char name[100];
  int age;
  int marks;
};
int main()
{
    struct Student s[100];
    int n;
    printf("Enter the numner of students:");
    scanf("%d",&n);
    FILE *fp=fopen("student.txt","w");
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        printf("Enter student name:");
        scanf(" %[^\n]",s[i].name);
        printf("Enter student age:");
        scanf("%d",&s[i].age);
        printf("Enter student marks:");
        scanf("%d",&s[i].marks);
    }
    for(int i=0;i<n;i++)
    {
        fprintf(fp,"Name:%s",s[i].name);
        fprintf(fp,"Age:%d",s[i].age);
        fprintf(fp,"Marks:%d",s[i].marks);
    }
    printf("\n");
    fclose(fp);
    return 0;

}