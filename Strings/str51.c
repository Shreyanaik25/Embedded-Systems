#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string:");
    scanf(" %[^\n]",str);
    int i,j,count;
    for(i=0;str[i]!='\0';i++)
    {
         if(str[i]==1)
         {
            continue;
         }
         count=1;
         for(j=0;str[j]!='\0';j++)
         {
            if(str[j]!=str[i])
            {
                count
            }
         }

    }
}