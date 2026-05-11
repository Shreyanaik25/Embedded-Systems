#include<stdio.h>
int DigitCount(int);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int result=DigitCount(num);
    printf("result=%d\n",result);
}
int DigitCount(int n)
{
    int rem,count=0;
    while(n)
    {
        rem=n%10;
        count++;
        n/=10;
    }
    return count;
}