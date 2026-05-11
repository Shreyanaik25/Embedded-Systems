#include<stdio.h>
void sum_Natural();
int num;
void main()
{
    printf("Enter the N natural number\n");
    scanf("%d",&num);
    sum_Natural();
}
void sum_Natural()
{
    int i,sum=0;
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("The sum of N natural number is %d",sum,num);
}
