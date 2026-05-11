#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter string:");
    scanf(" %99[^\n]",str);
    int i,j,count=0,visited[100]={0};
    for(i=0;str[i]!='\0';i++)
    {
        if(visited[i]==1)
        {
            continue;
        }
        count=1;
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
                visited[j]=1;
            }
        }
        if(count)
        {
            printf("%c occured %d times\n",str[i],count);
        }
    }
}