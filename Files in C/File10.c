#include<stdio.h>
int main()
{
    FILE *fp=fopen("Copy.txt","a");
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    fprintf(fp,"This line should be at the end\n");
    fclose(fp);
    printf("Data appended succesfull\n");
    return 0;
}