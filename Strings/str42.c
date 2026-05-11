#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string:");
    scanf(" %99[^\n]",str);
    int visited[100]={0};
    for(int=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(visited[i]==1)
            {
                continue;
            }
        }
    }
}