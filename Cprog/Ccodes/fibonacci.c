#include<stdio.h>
int main()
{
    int a=0,b=1,c;
    int n,i;
    printf("enter the number of terms:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid Input\n");
    }
    else if( n==1)
    {
        printf("Fibonacci sequence :%d",a);
    }
    else
    {
        printf("Fibonacci sequence :%d",a,b);
        for(i=2;i<n;i++)
        {
            c=a+b;
            printf("%d",c);
            a=b;
            b=c;

    }
    printf("\n");
    }
    return 0;
}
