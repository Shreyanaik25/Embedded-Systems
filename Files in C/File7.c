#include<stdio.h>
int main()
{
    FILE *fp=fopen("Test.txt","r");
    char str[100];
    int line=0;
    if(fp==NULL)
    {
        printf("File could not be opend.\n");
        return 1;
    }
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        printf("%s",str);
        line++;
    }
    fclose(fp);
    printf("Total number of line in the file: %d\n",line);
    return 0;
}