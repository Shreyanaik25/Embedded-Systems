#include<stdio.h>
int prime(int);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int result=prime(num);
    printf("The sum of prime digits=%d\n",result);
    return 0;
}
int prime(int n)
{
    int rem,sum=0;
    while(n)
    {
        rem=n%10;
        if(rem==2 || rem==3 || rem==5 || rem==7)
        {
            sum+=rem;
        }
        n/=10;
    }
    return sum;
}