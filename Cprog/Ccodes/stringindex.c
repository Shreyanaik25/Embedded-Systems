#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("Enter your full name:");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    int len=strlen(name);
    printf("Total characters:%d\n",len);
    for(int i=0;i<len;i++)
    {
        printf("Character at position %d:%c\n",i+1,name[i]);
    }
}
