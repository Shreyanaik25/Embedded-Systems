#include<stdio.h>
int main()
{
    FILE *fp=fopen("text.txt","w");
    if(fp==NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }
    fprintf(fp,"Hello file!\n");
    fprintf(fp,"C File handling is powerfull\n");
    fclose(fp);
    return 0;
}