#include<stdio.h>
int main()
{
    char str[100],ch;
    printf("Enter a string:");
    scanf(" %[^\n]",str);
    printf("Enter a character:");
    scanf(" %c",&ch);
    int i=0,count=0;
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            count++;
        }
        i++;
    }
    printf("The charcter %c occured %d times\n",ch,count);
    return 0;
}