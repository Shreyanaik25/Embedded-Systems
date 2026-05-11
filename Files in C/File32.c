#include<stdio.h>
int main()
{
    FILE *fp=fopen("pos1.txt","r");
    char str[100];
    if(fp==NULL)
    {
        printf("File could not open\n");
        return 1;
    }
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        printf("%s",str);
    }
    printf("Position after rweind:%ld\n",ftell(fp));
    fseek(fp,,SEEK_CUR);
    printf("Position after FSEEk:%ld\n",ftell(fp));
    printf("Character:%c\n",fgetc(fp));
    fclose(fp);
    return 0;
}