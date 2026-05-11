#include<stdio.h>
int main()
{
    FILE *fp=fopen("pos1.txt","w");
    if(fp==NULL)
    {
        printf("File could not open:\n");
        return 1;
    }
    fprintf(fp,"Shreya Naik");
    fclose(fp);
    return 0;
}