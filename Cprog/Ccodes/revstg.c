#include<stdio.h>
#include<string.h>
void reversedstring(char str[],int index)
{
    if(index<0)
        return ;
        printf("%c",str[index]);

    return reversedstring(str,index-1);
}
int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // Taking input (single word string)

    printf("Reversed string: ");
    reversedstring(str, strlen(str) - 1);  // Start from last index
    printf("\n");

    return 0;
    }


