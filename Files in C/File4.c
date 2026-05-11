#include<stdio.h>
int main()
{
    FILE *fp=fopen("text.txt","r");
    char p[100];
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    while(fgets(p,sizeof(p),fp)!=NULL)
    {
        printf("%s",p);
    }
    fclose(fp);
    return 0;
}