#include<stdio.h>
struct Student
{
    char name[50];
    int age;
    int marks;
};
int main()
{
    struct Student s;
    char str[100];
    FILE *fp=fopen("Record.txt","r");
    if(fp==NULL)
    {
        printf("File could not open.\n");
    }
    while(fgets(str,sizeof(str),fp)!=NULL)
    {
        printf("%s",str);
    }
    fclose(fp);
    return 0;
}