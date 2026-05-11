#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string:");
    scanf(" %99[^\n]",str);
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='I' && str[i]!='O' && str[i]!='E' && str[i]!='U')
        {
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
    printf("String after removing vowel:%s\n",str);
}