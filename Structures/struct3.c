#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int marks;
};
int main()
{
    struct student s1;
    struct student *ptr;
    ptr=&s1;
    printf("Enter Student name :");
    scanf("%s",ptr->name);
    printf("Enter student marks:");
    scanf("%d",&ptr->marks);
    printf("Name : %s\n",ptr->name);
    printf("Marks : %d\n",ptr->marks);
}