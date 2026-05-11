#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str1[100],str2[100],str3[100];
    printf("Enter the string1:");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter the string 2:");
    fgets(str2,sizeof(str2),stdin);
    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    if(strlen(str1)!=strlen(str2))
    {
        printf("No rotation possible!");
        return 0;
    }
    strcpy(str3,str1);
    strcat(str3,str1);
    if(strstr(str3,str2)!=NULL)
    {
        printf("Strings are rotations of each other:");
    }
    else
    {
    printf("Strings are not rotations of each other:");
}
}
