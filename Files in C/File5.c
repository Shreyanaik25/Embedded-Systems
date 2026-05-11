#include<stdio.h>
int main()
{
    FILE *fp=fopen("Test.txt","w");
    if(fp==NULL)
    {
        printf("File could not be open.\n");
        return 1;
    }
    fprintf(fp,"Hii Hello!\n");
    fprintf(fp,"My Name is shreya Naik.");
    fprintf(fp,"I am eletronics and communication student\n");
    fclose(fp);
    return 0;
}