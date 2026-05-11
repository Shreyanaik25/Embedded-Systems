#include<stdio.h>
void palindrome(int num);
void main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    palindrome(num);
}
void palindrome(num)
{
    int temp;
    int reversed=0,remainder;
    temp=num;
    while(temp!=0)
    {
        remainder=temp%10;
        reversed=reversed*10+remainder;
        temp/=10;
    }
    if(num==reversed)
    {
        printf("%d is Palindrome\n",num);

    }
    else
    {
        printf("%d is not palindrome\n",num);
    }
}
