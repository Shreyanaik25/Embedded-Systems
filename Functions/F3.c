#include<stdio.h>
int sum_of_digits(int);
int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d",&n);
    int result=sum_of_digits(n);
    printf("Sum of results=%d\n",result);
}
int sum_of_digits(int num)
{
    int sum=0,rem;
    while(num)
    {
        rem=num%10;
        sum=sum+rem;
        num/=10;
    }
    return sum;
}