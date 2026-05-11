#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string:");
    scanf(" %[^\n]",str);
    int length=0,i=0;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    int j=length-1;
    i=0;
    int isPalindrome = 1;
    while(str[i]!='\0')
    {
        if(str[i]!=str[j])
        {
             isPalindrome = 0;
             break;
        }
        i++;
        j--;
    }
    
    if(isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}