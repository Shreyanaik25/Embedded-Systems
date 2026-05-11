#include<stdio.h>
int main()
{
    char str[100];
    int word_count=0,i=0;
    printf("Enter string:");
    scanf(" %99[^\n]",str);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            word_count++;
        }
        i++;
    }
    printf("%d\n",word_count+1);
}