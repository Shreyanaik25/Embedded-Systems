#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter a string1:");
    scanf(" %[^\n]",str1);
    printf("Enter a string2:");
    scanf(" %[^\n]",str2);
    int i,j,found=1;
    for(i=0;str1[i]!='\0';i++)
    {
        for(j=0;str2[j]!='\0';j++)
        {
            if(str1[j]!=str2[j])
            {
                found=0;
                break;
            }
        }
    }
    if(found==1)
    {
        printf("Both the strings are same\n");
    }
    else
    {
        printf("Both are strings are diffrent\n");
    }

}