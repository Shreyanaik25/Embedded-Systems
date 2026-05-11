#include<stdio.h>
int main()
{
    FILE *fp=fopen("Data.txt","w");
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    fprintf(fp,"Name:Shreya Naik\n City: Belgaum\n Age: 22\n");
    fclose(fp);
    return 0;
}