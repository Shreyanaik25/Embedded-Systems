#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter a string:");
    scanf(" %99[^\n]",str1);
    int i = 0;
    while(str1[i] != '\0')
{
    str2[i] = str1[i];
    i++;
}
str2[i] = '\0';
printf("%s\n",str2);
}
