#include<stdio.h>
void even();
void odd();
int num;
void main()
{
    printf("Enter the numbers \n");
    scanf("%d",&num);
    even();
    odd();
}
void even()
{
    if(num%2==0)
    {
        printf("The number is even\n");
    }
}
void odd()
{
    if(num%2!=0)
    {
        printf("The number is odd\n");
    }
}
