#include<stdio.h>
int main()
{
    char str[100];
    int visited[100]={0};
    printf("Enter a string:");
    scanf(" %[^\n]",str);
    int i=0,j=0,count=0;
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
        printf("%c: %d times\n",str[i],count);

    }
    
}