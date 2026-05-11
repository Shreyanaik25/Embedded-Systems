#include<stdio.h>
void Palindrome(int);
int main()
{
   int num;
   printf("Enter number:");
   scanf("%d",&num);
   Palindrome(num);
   return 0;
}
void Palindrome(int n)
{
    int orignal=n;
    int rem,rev=0;
    while(n)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(rev==orignal)
    {
        printf("The number is Palindrome\n");
    }
    else
    {
        printf("The number is not Palindrome\n");
    }
}