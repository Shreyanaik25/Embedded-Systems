#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter the string1:");
    scanf(" %99[^\n]",str1);
    printf("Enter the string2:");
    scanf(" %99[^\n]",str2);
    int i=0,found=1;
    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
             found=0;
             break;
        }
        i++;
    }
    if(found==1)
    {
        printf("Both the strings are same\n");
    }
    else
    {
        printf("Both the strings are diffrent\n");
    }
}