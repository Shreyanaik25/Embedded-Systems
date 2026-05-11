#include<stdio.h>
void Perfect(int);
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    Perfect(num);
    return 0;
}
void Perfect(int n)
{
    int i,sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        printf("The number is perfect number\n");
    }
    else
    {
        printf("The number is not perfect number\n");
    }
}