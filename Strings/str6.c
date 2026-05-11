#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string:");
    scanf(" %[^\n]",str);
    int count=0;
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='O' || str[i]=='U')
        {
            count++;
        }
        i++;
        
    }
    printf("Number of vowels in string:%d\n",count);
}