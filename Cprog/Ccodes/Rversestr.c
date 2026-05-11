#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    char words[20][20];
    int i,count=0;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    char *token=strtok(str," " );
    while(token!=NULL)
    {
        strcpy(words[count],token);
        count++;
        token=strtok(NULL," ");
    }
    printf("Reversed string:");
    for(i=count-1;i>=0;i--)
    {
        printf("%s",words[i]);
        if(i>0)
            printf(" ");
    }
    printf("\n");
    return 0;

}
