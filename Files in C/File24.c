#include<stdio.h>
int main()
{
    FILE *fp=fopen("intro.txt","w+");
    char str[100];
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    fprintf(fp,"My name is shreya\nI am learning C files\nThis is w+ mode\n");
    rewind(fp);
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        printf("%s",str);
    }
    rewind(fp);
    fclose(fp);
    return 0;

}