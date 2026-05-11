#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]",str);
    int length=0;
    int i=0;
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
        length++;
    }
    printf("\n");
    printf("Length of string: %d\n",length);
}