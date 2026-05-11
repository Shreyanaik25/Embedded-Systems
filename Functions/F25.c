#include<stdio.h>
int Factorial(int);
int Special(int);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int result=Special(num);
     if(result)
        printf("Special (Strong) number\n");
    else
        printf("Not Special number\n");

    return 0;
}
int Factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int Special(int n)
{
    int rem,sum=0,orignal;
    orignal=n;
    while(n)
    {
    rem=n%10;
    sum+=Factorial(rem);
    n/=10;
    }
    if(sum==orignal)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}