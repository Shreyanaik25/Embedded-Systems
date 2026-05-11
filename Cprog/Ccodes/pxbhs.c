#include<stdio.h>
int checkPalindrome(unsigned int num)
{
    int original,reversed=0,remainder;
    original=num;
    while(num!=0)
    {
        remainder=num%10;
        reversed=reversed*10+remainder;
        num/=10;
    }
    if(reversed==original)
    {
        printf("%d is palindrome\n",num);
    }
    else
    {
        printf("%d is not palindrome\n",num);
    }
}
int main()
{

    unsigned int num;
    printf("Enter the number to check Palindrome:\n");
    scanf("%d",&num);
    checkPalindrome(num);
    return 0;
}
