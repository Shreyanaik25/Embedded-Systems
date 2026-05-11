#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string:");
    scanf(" %[^\n]",str);
    int vowel_count=0,digit=0,space=0,consonant=0;
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else if(str[i]==' ')
        {
            space++;
        }
        else if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='O' || str[i]=='U')
        {
            vowel_count++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')))
        {
            consonant++;
        }
        i++;
        
    }
    printf("Digit Count: %d\n",digit);
    printf("Space Count: %d\n",space);
    printf("Vowel Count: %d\n",vowel_count);
    printf("Consonant Count: %d\n",consonant);
}