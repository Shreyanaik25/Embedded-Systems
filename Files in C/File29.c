#include<stdio.h>
int main()
{
    FILE *fp=fopen("a.txt","w+");
    char ch,str[100];
    if(fp==NULL)
    {
        printf("File could not open\n");
        return 1;
    }
    fprintf(fp,"Shreya Naik\n");
    rewind(fp);
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        printf("%s",str);
    }
    fseek(fp,10,SEEK_SET);
    ch=fgetc(fp);
    printf("Character at position 2: %c\n", ch);
    fclose(fp);
    return 0;
}