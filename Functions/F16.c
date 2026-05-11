#include<stdio.h>
void Strong(int);
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    Strong(num);
    return 0;
}
void Strong(int n)
{
    int fact=1,sum=0,rem,i;
    int orignal=n;
while(n > 0)
{
    rem = n % 10;
    fact = 1;
    for(i = 1; i <= rem; i++)
    {
        fact *= i;
    }

    sum += fact;
    n /= 10;
}
    if(sum==orignal)
    {
        printf("The number is strong\n");
    }
    else
    {
        printf("The number is not strong\n");
    }
}