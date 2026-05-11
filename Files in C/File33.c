#include<stdio.h>
int main()
{
    FILE *fp=fopen("size.txt","w+");
    if(fp==NULL)
    {
        printf("File could not open:");
        return 1;
    }
    fprintf(fp,"Hello Shreya");
    printf("Size of File %ldbytes\n",ftell(fp));
    fclose(fp);
    return 0;

}