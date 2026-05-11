#include<stdio.h>
int main()
{
    FILE *fp;
    if((fp=fopen("new.txt","r+"))==NULL)
    {
        printf("File not found!");
    }
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
       fputc(ch,stdout);
    }
    rewind(fp);
    fputc('v',fp);
    fputc('i',fp);
    fputc('r',fp);
    fputc('a',fp);
    fputc('t',fp);
    rewind(fp);
}