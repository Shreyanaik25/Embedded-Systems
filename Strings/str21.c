#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf(" %99[^\n]",str);
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
    printf("String without space:%s\n",str);
    return 0;
}