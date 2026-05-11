#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char original[100],cleaned[100];
    int i,j=0,isPalindrome=1;
    printf("Enter your name:");
    fgets(original,sizeof(original),stdin);
    original[strcspn(original,"\n")]='\0';
    for(i=0;original[i]!='\0';i++)
    {
        if(original[i]==' ')
            cleaned[j++]=tolower(original[i]);
    }
    cleaned[j]='\0';
    int len=strlen(original);
    for(i=0;i<len/2;i++)
    {
        if(cleaned[i]!=cleaned[len-i-1])
        {
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}
