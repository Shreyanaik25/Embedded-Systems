#include<stdio.h>
int main()
{
    FILE *fp=fopen("marks.txt","r+");
    char str[100];
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    printf("Before update:\n");
    fprintf(fp,"Shreya\t:\t85\nRiya\t:\t90\nAman\t:\t78\n");
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        printf("%s",str);
    }
    rewind(fp);
    fprintf(fp,"Shreya\t:\t95\n");
    rewind(fp);
    printf("After update:\n");
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        printf("%s",str);
    }
    fclose(fp);
    return 0;
}