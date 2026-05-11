#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str1[100],str2[100];
    int freq1[256]={0},freq2[256]={0},i;
    printf("Enter string1:");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter string 2:");
    fgets(str2,sizeof(str2),stdin);
    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    for(i=0;str1[i]!='\0';i++)
    {
        char ch=tolower(str1[i]);
        if(ch!=' ')
        {
            freq1[(int)ch]++;
        }
    }
    for(i=0;str2[i]!='\0';i++)
    {
        char ch=tolower(str2[i]);
        if(ch!=' ')
        {
            freq2[(int)ch]++;
        }
    }
    for(i=0;i<256;i++)
    {
        if(freq1[i]!=freq2[i])
        {
            printf("Anagram of string not found");
            return 0;
        }
    }
    printf("Strings are anagrams\n");
    return 0;
}
