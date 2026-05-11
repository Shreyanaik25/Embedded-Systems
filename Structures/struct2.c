#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int marks;
};
int main()
{
    struct student s1[100],temp;
    int n,i,topper;
    printf("Enter the number of student\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the name of the student:");
        scanf("%s",s1[i].name);
        printf("Enter the marks:");
        scanf("%d",&s1[i].marks);
    }
    printf("Students Details:\n");
    for(i=0;i<n;i++)
    {
        printf("-----------------------------------\n");
        printf("Name of the student:%s\n",s1[i].name);
        printf("Marks: %d\n",s1[i].marks);
    }
    printf("sorting students by marks:\n");
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s1[j].marks>s1[j+1].marks)
            {
                temp=s1[j];
                s1[j]=s1[j+1];
                s1[j+1]=temp;
            }
        }

    }
    for(i=0;i<n;i++)
    {
       printf("Name: %s\n",s1[i].name);
       printf("Marks: %d\n",s1[i].marks);
    }
    for(i=0;i<n;i++)
    {
        if(s1[i].marks>s1[topper].marks)
        {
            topper=i;
        }
    }
    printf("Topper of the class:\n");
    printf("Name:%s\n",s1[topper].name);
    printf("Marks:%d\n",s1[topper].marks);
    return 0;
}