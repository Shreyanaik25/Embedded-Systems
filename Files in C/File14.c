#include<stdio.h>
int main()
{
    FILE *fp=fopen("student.txt","r");
    char str[100];
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        printf("%s",str);
    } 
    fclose(fp);
    return 0;
}