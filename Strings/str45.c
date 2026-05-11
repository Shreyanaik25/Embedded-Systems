#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int found=0,visited[100]={0},anagram=1;
    printf("Enter string 1:");
    scanf(" %[^\n]",str1);
    printf("Enter string 2:");
    scanf(" %[^\n]",str2);
    int length1=0,length2=0,i;
    for(i=0;str1[i]!='\0';i++)
    {
        length1++;
    }
    for(i=0;str2[i]!='\0';i++)
    {
        length2++;
    }
    if(length1!=length2)
    {
        anagram=0;
    }
    else
    {
    for(i=0;str1[i]!='\0';i++)
    {
        found=0;
        for(int j=0;str2[j]!='\0';j++)
        {
            if(str1[i]==str2[j] && visited[j]==0)
            {
                visited[j]=1;
                found=1;
                break;
            }
        }
        if(found==0)
        {
            anagram=0;
            break;
        }
    }
}
if(anagram==1)
{
    printf("strings are anagram\n");
}
else
{
    printf("Strings are not anagram\n");
}
return 0;
}