#include<stdio.h>
int main()
{
    int num,temp,reversed=0 ,remainder;
    printf("Enter the terms :\n");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        remainder=temp%10;
        reversed=reversed*10+remainder;
        temp/=10;
    }
    if(num==reversed)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }
}
