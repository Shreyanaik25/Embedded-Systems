#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string:");
    scanf(" %[^\n]",str);
    int i=0,word_count=0;
    while(str[i]!='\0')
    {
        if((str[i]!=' ') && (i==0 || str[i-1]==' '))
        {
            word_count++;
        }
        i++;
    }
    printf("Word Count=%d\n",word_count);
}