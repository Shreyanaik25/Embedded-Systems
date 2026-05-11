#include<stdio.h>
int SquareDigit(int);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    int result=SquareDigit(num);
    printf("Result=%d\n",result);
    return 0;
}
int SquareDigit(int n)
{
    int rem,sq,sum=0;
    while(n)
    {
        rem=n%10;
        sq=rem*rem;
        sum=sum+sq;
        n/=10;
    }
    return sum;
}