#include<stdio.h>
int main()
{
    FILE *fp=fopen("Test.txt","r");
    char str[100];
    int word=0;
    int ch;
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
        while((ch=fgetc(fp))!=EOF)
        {
            putchar(ch);
            if (ch == ' ' || ch == '\n' || ch == '\t')
            {
            putchar(ch);
            word++;
            }
        }
    fclose(fp);
    word++;
    printf("Words in the file:%d\n",word);
}