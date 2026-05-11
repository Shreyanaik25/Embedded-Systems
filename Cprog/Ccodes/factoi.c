#include<stdio.h>
void factorial(int num)
{
    int fact=1,i;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d = %d",num,fact);
}
int main()
{
    int num;
    printf("Enter the number which you want to know factorial of:\n");
    scanf("%d",&num);
    factorial(num);
    return 0;
}
