#include<stdio.h>
int main()
{
    FILE *fp=fopen("Test.txt","r");
    char ptr[100];
    int total=0;
    if(fp==NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }
    while(fgets(ptr,sizeof(ptr),fp)!=NULL)
    {
        printf("%s",ptr);
        int i=0;
        while (ptr[i] != '\0')
{
    if (ptr[i] != '\n')
    {
        total++;
    }
    i++;
}

    }

    fclose(fp);
    printf("\nTotal characters = %d\n", total);
    return 0;

}