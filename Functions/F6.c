#include<stdio.h>
int Prime(int);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int result=Prime(n);
    printf("Prime=%d\n",result);
}
int Prime(int num)
{
    int count=0;
    for(int i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count>0)
    {
        return 0;
    }
    else{
        return 1;
    }
}