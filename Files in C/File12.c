#include<stdio.h>
int main()
{
    FILE *fp=fopen("Number.txt","a");
    int sum=0;
    if(fp==NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    fprintf(fp," 40 50");
    fclose(fp);
    printf("Numbers appended succesfully\n");
    fp=fopen("Number.txt","r");
    if (fp == NULL)
    {
        printf("File could not open.\n");
        return 1;
    }
    int num;
    while(fscanf(fp,"%d",&num)==1)
    {
        printf("%d\n",num);
        sum+=num;
    }
    fclose(fp);
    printf("The sum of numbers in the file:%d\n",sum);
    return 0;
}