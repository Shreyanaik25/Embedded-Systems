#include<stdio.h>
void fact();
int num;
void main()
{
    printf("enter the number :\n");
    scanf("%d",&num);
    fact();
}
void fact()
{
    int i ,factorial=1;
    for(i=1;i<=num;i++)
    {
        factorial=factorial*i;
    }
    printf("The factorial of the %d is %d",num,factorial);
}


