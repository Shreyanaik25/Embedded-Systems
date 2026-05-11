#include<stdio.h>
int main()
{
    int i, n ,factorial=1;
    printf("Enter the number that you factorial of:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("The factorial of number is %d=%d\n",n,factorial);
}

