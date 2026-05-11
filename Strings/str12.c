#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf(" %99[^\n]",str);
    int length=0,i=0;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    int j=length-1;
    i=0;
    while(i<j)
    {
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    printf("The reversed string is %s\n",str);
}