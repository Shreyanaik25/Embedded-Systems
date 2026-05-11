#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string:");
    scanf(" %99[^\n]",str);
    int i=0,length=0;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    i=0;
    int palindrome=1;
    int j=length-1;
    while(str[i]!='\0')
    {
        if(str[i]!=str[j])
        {
          palindrome=0;
          break;
        }
        i++;
        j--;
    }
    if(palindrome==1)
    {
        printf("The string is Palindrome\n");
    }
    else
    {
        printf("The string is not Palindrome\n");
    }
}