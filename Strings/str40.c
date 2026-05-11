#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter a string1:");
    scanf(" %99[^\n]",str1);
    printf("Enter a string2:");
    scanf(" %99[^\n]",str2);
    int i=0,j=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("Concatenate string: %s\n",str1);
}