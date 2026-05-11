#include<stdio.h>
struct Student
{
   char name[50];
   int age;
   int marks;
};
int main()
{
    struct Student s[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter name,age,marks:%d\n",i+1);
        scanf("%s %d %d",s[i].name,&s[i].age,&s[i].marks);
    }
    
    int maxindex=0;
    for(int i=0;i<5;i++)
    {
        if(s[i].marks>s[maxindex].marks)
        {
            maxindex=i;
        }
    }
    printf("Toper of the class:");
    printf("Name = %s | Age = %d | Marks = %d\n",s[maxindex].name,s[maxindex].age,s[maxindex].marks);
}