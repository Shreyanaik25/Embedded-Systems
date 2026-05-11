#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string:");
    scanf(" %[^\n]",str);
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
    printf("String after removing spaces:%s\n",str);
}