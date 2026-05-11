#include<stdio.h>
int main()
{
    int sum,i,num;
    printf("Enter the N natural numbres\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }

        printf("The sum of N natural numbers is %d ",sum,num);
    }

