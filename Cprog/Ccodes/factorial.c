#include<stdio.h>
void fact();
int num;
int main()
{
    printf("Enter the number which you want the factorial of :\n");
    scanf("%d",&num);
    fact();
}
void fact()
{
    int i,factorial=1;;
    for(i=1;i<=num;i++)
    {
        factorial=factorial*i;

    }
    printf("The factorial of %d is %d",num,factorial);
}

