#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf(" %99[^\n]",str);
    int length=0,i=0;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    i=0;
    int j=length-1;
    int palindrome=1;
    while(i < j)
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
        printf("The string is palindrome\n");
    }
    else
    {
        printf("The string is not palindrome\n");
    }
}