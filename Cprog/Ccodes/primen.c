#include<stdio.h>
int main()
{
    int n;
    printf("Enter the numner:");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("Not prime");
        return 0;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("Not prime");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}
