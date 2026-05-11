#include<stdio.h>
#include<string.h>
int main()
{
    char name[100],temp;
    int i;
    printf("Enter your name:");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    int len=strlen(name);
    for(i=0;i<len/2;i++)
    {
        temp=name[i];
        name[i]=name[len-i-1];
        name[len-i-1]=temp;
    }
    printf("Reversed=%s",name);

}
