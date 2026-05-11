#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    int i,temp;
    printf("Enter your full name:");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    int len =strlen(name);
    printf("Total Characters:%d\n",len);
    for(i=0;i<len;i++)
    {
        printf("Character at position %d:%c\n",i+1,name[i]);
    }
}
