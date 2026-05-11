#include<stdio.h>
int main()
{
    int n,digit,rev=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int original=n;
    while(n>0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    if(rev==original)
    {
        printf("Palindrome number\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
    printf("Reversed number:%d\n",rev);

}
