#include<stdio.h>
int main()
{
    FILE *fp=fopen("Number.txt","w");
    if(fp==NULL)
    {
        printf("File could not open.\n");
    }
    fprintf(fp,"%d %d %d",10,20,30);
    fclose(fp);
    printf("Numbers writtened succesfully\n");
    fp=fopen("Number.txt","r");
    int num;
    while(fscanf(fp,"%d",&num)==1)
    {
        printf("%d\n",num);
    }
    fclose(fp);
    return 0;
}