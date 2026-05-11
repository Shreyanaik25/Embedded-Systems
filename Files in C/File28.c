#include<stdio.h>
int main()
{
    FILE *fp=fopen("dairy.txt","w+");
    char str[100];
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    fprintf(fp,"My Daily Tasks:\n1.Today I practised C\n");
    printf("Before append\n");
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        printf("%s",str);
    }
    fclose(fp);
    fp=fopen("dairy.txt","a+");
    if(fp==NULL)
    {
        printf("File could not open\n");
        return 1;
    }
    fprintf(fp,"Today I,learned files concept in C\n");
    rewind(fp);
    printf("After append\n");
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        printf("%s",str);
    }
    fclose(fp);
    printf("Apended succesfully\n");
    return 0;

}