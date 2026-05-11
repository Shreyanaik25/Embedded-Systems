#include<stdio.h>
int PerfectSquare(int);
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    int result=PerfectSquare(num);
    if(result)
    {
        printf("Perfect Square\n");
    }
    else
    {
        printf("Not Perfect Square\n");
    }
    return 0;
}
int PerfectSquare(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i*i==n)
        {
            return 1;
        }
    }
    return 0;
}
