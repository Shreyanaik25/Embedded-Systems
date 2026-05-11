#include<stdio.h>
int main()
{
    FILE *fp=fopen("Sample.txt","r+");
    char line[100];
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    while(fgets(line,sizeof(line),fp)!=NULL)
    {printf("Before:%s",line);
    }
    rewind(fp);
    fprintf(fp,"I am seraching for job.\n");
    rewind(fp);
    while(fgets(line,sizeof(line),fp)!=NULL)
    {
        printf("%s",line);
    }
    fclose(fp);
    return 0;
}