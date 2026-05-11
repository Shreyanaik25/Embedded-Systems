#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks of the student:\n");
    scanf("%d",&marks);
    if(marks>=40)
    {
        printf("The student is pass\n");
    }
    else
    {
        printf("The student is fail\n");
    }
}
