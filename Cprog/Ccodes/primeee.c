#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("Not prime");
        return 0;
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("Not prime");
            return 0;
        }
    }
    printf("prime");
    return 0;
}
