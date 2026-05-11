#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf(" %[^\n]",str);
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]<'0' || str[i]>'9')
        {
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
    printf("String After removing digits: %s\n",str);
}