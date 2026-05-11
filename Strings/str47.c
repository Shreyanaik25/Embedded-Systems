#include<stdio.h>
int main()
{
    char str1[100],str2[100]i,j;
    printf("Enter string1:");
    scanf(" %99[^\n]",str1);
    printf("Enter string 2:");
    scanf(" %99[^\n]",str2);
    for(i=0;str1[i]!='\0';i++)
    {
        for(j=0;str2[j]!='\0';i++)
        {
            str1[i]==str2[j];
        }
    }
    printf("Both the string are equal:");
}