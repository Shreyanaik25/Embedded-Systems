#include<stdio.h>
int main()
{
    FILE *fp=fopen("count.txt","w+");
    char ch;
    if(fp==NULL)
    {
        printf("File could not open\n");
        return 1;
    }
    fprintf(fp,"C programming");
    printf("Size of the file %ld bytes\n",ftell(fp));
    rewind(fp);
    while((ch=fgetc(fp))!=EOF)
    {
        printf("Character %c,position after readind %ld\n",ch,ftell(fp));
    }
    fclose(fp);
    return 0;
    
}