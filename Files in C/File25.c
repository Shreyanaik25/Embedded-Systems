#include<stdio.h>
int main()
{
    FILE *fp=fopen("num.txt","w+");
    char str[100];
    int num,sum=0;
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    fprintf(fp,"%d\n%d\n%d\n%d\n%d\n",10,20,30,40,50);
    rewind(fp);
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        printf("%s",str);
    }
    rewind(fp);
    while(fscanf(fp,"%d",&num)==1)
    {
        sum+=num;
    }
    fprintf(fp,"Sum:%d\n",sum);
    fclose(fp);
    printf("Sum=%d",sum);
}