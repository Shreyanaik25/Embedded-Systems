#include<stdio.h>
int Neon(int);
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    int result=Neon(num);
    if(result)
    {
        printf("Its Noen number\n");
    }
    else
    {
        printf("Its not Neon number\n");
    }
    return 0;
}
int Neon(int n)
{
    int rem,sum=0,sq;
    sq=n*n;
    int orignal=n;
    while(sq>0)
    {
        rem=sq%10;
        sum+=rem;
        sq/=10;
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