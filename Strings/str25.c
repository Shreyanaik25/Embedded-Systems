#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf(" %99[^\n]",str);
    int i=0;
    while(str[i]!='\0')
    {
        printf("%d-> %c\n",i,str[i]);
        i++;
    }
}