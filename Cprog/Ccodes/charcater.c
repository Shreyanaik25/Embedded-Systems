#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Character:\n");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='z'))
    {
        if((ch=='a' || ch=='e' || ch=='i' ||ch=='o'||ch=='u' ||
            ch=='A' || ch=='E'||ch=='I'||ch=='O'||ch=='U'))
            {
        printf("The character is vowel\n");
    }
    else
    {
        printf("The character is consonant");
    }
}
    else if(ch >= '0'&& ch <= '9')
    {
        printf("The character is digit\n");
    }
    else
    {
        printf("The character is special character\n");
    }
        return 0;

    }
