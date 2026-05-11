#include<stdio.h>
int main()
{
    FILE *fp=fopen("input.txt","w+");
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    fprintf(fp,"My name is shreya.\n");
    fprintf(fp,"I am learning C programming,\n");
    int word=0,line=0,character=0;
    char ch;
    rewind(fp);
    while((ch=fgetc(fp))!=EOF)
    {
        character++;  
    if(ch==' ' || ch=='\n' || ch=='\t')
    {
        word++;
    }
    if(ch=='\n')
    {
        line++;
    }
}
    fclose(fp);
    printf("Characters in the file: %d\n",character);
    printf("Words in the file: %d\n",word);
    printf("Lines in the file: %d\n",line);
    return 0;
}