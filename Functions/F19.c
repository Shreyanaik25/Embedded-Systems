#include<stdio.h>
int Spy(int);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int result=Spy(num);
    if(result)
    {
        printf("The number is Spy\n");
    }
    else
    {
        printf("The number is not Spy\n");
    }
    return 0;
}
int Spy(int n)
{
    int rem,sum=0,pro=1;
    if(n==0)
    {
        return 1;
    }
    while(n)
    {
        rem=n%10;
        sum+=rem;
        pro*=rem;
        n/=10;
    }
    if(sum==pro)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}