#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,isPalindrome=1;
    printf("Enter your name:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome)
    {
        printf("Plaindrome");
    }
    else
    {
        printf("Not palindrome");
    }
}
