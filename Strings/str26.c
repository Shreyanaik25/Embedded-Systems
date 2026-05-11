#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf(" %[^\n]",str);
    int length=0,i=0;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    printf("The length of string:%d",length);
}