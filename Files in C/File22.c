#include<stdio.h>
int main()
{
    FILE *fp=fopen("Sample.txt","w+");
    char str[100];
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    fprintf(fp,"Hey folks!\n");
    fprintf(fp,"I am learning C .I am interested in embedded system\n");
    rewind(fp);
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        printf("%s",str);
    }
    fclose(fp);
}