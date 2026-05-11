#include<stdio.h>
int main()
{
    FILE *fp=fopen("Pos.txt","w+");
    char str[100];
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    fprintf(fp,"ABCDE\n");
    rewind(fp);
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        printf("%s",str);
    }
    printf("Position after writing:%ld\n",ftell(fp));
    rewind(fp);
    printf("Position after rewind:%ld\n",ftell(fp));
    fseek(fp,3,SEEK_SET);
    printf("Position after seekset:%ld\n",ftell(fp));
    printf("Character:%c\n",fgetc(fp));
    fclose(fp);
    return 0;
}