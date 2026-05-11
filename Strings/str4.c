#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string:");
    scanf(" %99[^\n]",str);
    for(int i=0;str[i]!='\0';i++)
    {
        printf("Index=%d\tCharacter:%c\n",i,str[i]);
    }
}