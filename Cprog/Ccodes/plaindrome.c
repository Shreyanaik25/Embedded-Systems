#include<stdio.h>
int main()
{
    int num,reversed =0,remainder,temp;
    printf("Enter the number to check plindrome or not\n");
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
        printf("%d is palindrome\n",num);
    }
    else
    {
        printf("%d is not palindrome\n",num);
    }

}
