#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the string:");
    scanf(" %99[^\n]",str);
    int i=0,length=0;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    i=0;
    int j=length-1;
    while(i<j)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("Reversed string: %s\n",str);
}