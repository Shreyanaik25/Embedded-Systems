#include<stdio.h>
int main()
{
    FILE *src=fopen("text.txt","r");
    FILE *dst=fopen("Copy.txt","w");
    char ch;
    if(src==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    if(dst==NULL)
    {
        printf("Destination file could not open.\n");
        fclose(src);
        return 1;
    }
    while((ch=fgetc(src))!=EOF)
    {
        fputc(ch,dst);

    }
    fclose(src);
    fclose(dst);
    printf("File copied succesfully\n");
    return 0;
}