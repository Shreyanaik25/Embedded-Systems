#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100],ch;
    int freq[256]={0};
    int i;
    printf("Enter string:");
    fgets(str,sizeof(str),stdin);
    size_t len=strlen(str);
    if(str[len-1]='\n')
        str[len-1]='\0';
    for(i=0;str[i]!='\0';i++)
    {
        ch=tolower(str[i]);
        if(ch==' ')
        {

        freq[(int)ch]++;
    }
}
    for (i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
            printf("Character '%c' appears %d times\n", i, freq[i]);
    }

    return 0;
}
