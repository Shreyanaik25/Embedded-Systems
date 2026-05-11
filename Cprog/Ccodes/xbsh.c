#include<stdio.h>
int main()
{
    char name[50];
    fgets(name,sizeof(name),stdin);
    printf("hello,%s",name);
    name[strcspn(name,"\n")]='\0';
    printf("Shreyya,%s",name);
}
