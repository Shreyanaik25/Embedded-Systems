#include<stdio.h>
#include<string.h>
int reversestr(char str[])
{
    int start=0;
    int end=strlen(str)-1;
    while(start<end)
        {char temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    start++;
    end--;
}
}
int main()
{
    char str[100];
    printf("Enter the string\n");
    scanf("%s",&str);
    reversestr(str);
    printf("Rveresed string is %s",str);
    return 0;
}
