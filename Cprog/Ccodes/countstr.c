#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char name[100];
    int i;
    int vowels=0,consonants=0,digits=0,special=0;
    printf("Enter the name:");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    int len=strlen(name);
    for(i=0;name[i]!='\0';i++)
    {
        char ch=name[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
   ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vowels++;
        }
       else if(isalpha(ch))
        {
            consonants++;
        }
        else if(isdigit(ch))
        {
            digits++;
        }
        else if(!isspace(ch))
        {
            special++;
        }

    }
    printf("Vowels=%d\n",vowels);
    printf("Consonants=%d\n",consonants);
    printf("Digits=%d\n",digits);
    printf("Special=%d\n",special);
}
