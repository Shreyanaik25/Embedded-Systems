#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter string 1:");
    scanf(" %99[^\n]",str1);
    printf("Enter string 2:");
    scanf(" %99[^\n]",str2);
    int i,j,l1=0,l2=0;
    for(i=0;str1[i]!='\0';i++)
    {
        l1++;
    }
    for(i=0;str2[i]!='\0';i++)
    {
        l2++;
    }
    if(l1!=l2)
    {
        printf("string are not equal\n");
    }
    i=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    j=0;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    int visited[100]={0};
    for(i=0;str1[i]!'\0';i++)
    {
        for(j=0;str2[j]!='\0';j++)
        {
           
        }
    }
}